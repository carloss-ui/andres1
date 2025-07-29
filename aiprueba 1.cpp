


Simula un "sistema operativo no libre" que incluye IA para resolver problemas comunes

import time import random

Base de conocimientos de IA (simulada)

respuestas_ia = { "estado": "El sistema está funcionando correctamente, no se detectan errores graves.", "optimizar": "He liberado memoria cerrando procesos innecesarios.", "rendimiento": "Modo alto rendimiento activado para maximizar el desempeño.", "virus": "No se detectaron amenazas en el último escaneo.", "ayuda": "Puedo ayudarte a diagnosticar problemas, optimizar el sistema o darte recomendaciones.", "actualizacion": "Actualización aplicada con éxito, no se detectaron incompatibilidades.", "driver": "He verificado los controladores, todos están actualizados y compatibles.", "incompatibilidad": "Detecté un software incompatible, se recomienda desinstalar o buscar alternativa.", "reinicio": "Se realizó un reinicio seguro para solucionar fallos menores." }


sistema = { "cpu": 35,  # % de uso "ram": 68,  # % de uso "procesos": ["explorer", "chrome", "editor", "juego.exe"], "actualizado": False, "drivers_ok": False, "software_incompatible": True }

Función IA de respuesta y resolución de problemas

def asistente_ia(peticion): peticion = peticion.lower()

if "estado" in peticion:
    return respuestas_ia["estado"]

elif "optimizar" in peticion or "mejora" in peticion:
    sistema["ram"] -= random.randint(5, 15)
    return respuestas_ia["optimizar"] + f" RAM actual: {sistema['ram']}%"

elif "rendimiento" in peticion:
    return respuestas_ia["rendimiento"]

elif "virus" in peticion or "amenaza" in peticion:
    return respuestas_ia["virus"]

elif "ayuda" in peticion:
    return respuestas_ia["ayuda"]

elif "actualiza" in peticion or "actualizacion" in peticion:
    sistema["actualizado"] = True
    return respuestas_ia["actualizacion"]

elif "driver" in peticion or "controlador" in peticion:
    sistema["drivers_ok"] = True
    return respuestas_ia["driver"]

elif "incompatible" in peticion or "problema software" in peticion:
    if sistema["software_incompatible"]:
        sistema["software_incompatible"] = False
        return respuestas_ia["incompatibilidad"]
    else:
        return "No se detectan programas incompatibles actualmente."

elif "reinicia" in peticion or "reinicio" in peticion:
    sistema["cpu"] = 20
    sistema["ram"] = 40
    return respuestas_ia["reinicio"]

else:
    return "No entendí tu solicitud. ¿Puedes reformularla?"

Simulación de consola del "sistema operativo"

def consola_sistema(): print("Bienvenido a NeoSystemOS v2.0 [Sistema Cerrado con IA]") print("Asistente IA integrado listo para ayudarte.")

while True:
    comando = input("\n[Usuario] > ")
    if comando.lower() in ["salir", "apagar", "exit"]:
        print("Apagando el sistema...")
        break
    respuesta = asistente_ia(comando)
    print(f"[IA] {respuesta}")
    time.sleep(1)

Ejecución

i = input("¿Deseas iniciar NeoSystemOS con IA? (si/no): ") if i.lower() == "si": consola_sistema() else: print("Sistema apagado.")
