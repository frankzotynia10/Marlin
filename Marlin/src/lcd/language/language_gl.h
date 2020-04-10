/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Galician language (ISO "gl")
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_1
#define NOT_EXTENDED_ISO10646_1_5X7

namespace Language_gl {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 1;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Galician");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" lista.");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Tarxeta inserida");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Tarxeta retirada");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("FinCarro");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Menu principal");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Autoarranque");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Apagar motores");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Ir a orixe");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Ir orixe X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Ir orixe Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Ir orixe Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Ir orixes XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Prema pulsador");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Seguinte punto");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Nivelado feito");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Offsets na orixe");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Offsets fixados");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Fixar orixe");
  PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Prequentar ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_1_H                     = _UxGT("Prequentar ") PREHEAT_1_LABEL " ~";
  PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Preque. ") PREHEAT_1_LABEL _UxGT(" Bico");
  PROGMEM Language_Str MSG_PREHEAT_1_END_E                 = _UxGT("Preque. ") PREHEAT_1_LABEL _UxGT(" Bico ~");
  PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Preque. ") PREHEAT_1_LABEL _UxGT(" Todo");
  PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Preque. ") PREHEAT_1_LABEL _UxGT(" Cama");
  PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Preque. ") PREHEAT_1_LABEL _UxGT(" conf");
  PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Prequentar ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_2_H                     = _UxGT("Prequentar ") PREHEAT_2_LABEL " ~";
  PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Preque. ") PREHEAT_2_LABEL _UxGT(" Bico");
  PROGMEM Language_Str MSG_PREHEAT_2_END_E                 = _UxGT("Preque. ") PREHEAT_2_LABEL _UxGT(" Bico ~");
  PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Preque. ") PREHEAT_2_LABEL _UxGT(" Todo");
  PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Preque. ") PREHEAT_2_LABEL _UxGT(" Cama");
  PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Preque. ") PREHEAT_2_LABEL _UxGT(" conf");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Arrefriar");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Acender");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Apagar");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Extrudir");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Retraer");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Mover eixe");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Nivelando Cama");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Nivelar Cama");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Nivelar Cantos");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Seguinte Canto");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editor Mallado");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Editar Mallado");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Ed. Mallado Detida");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Punto de Proba");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Índice X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Índice Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valor Z");
  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Comandos Personaliz.");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("M48 Probar Sonda");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("M48 Punto");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Desviación");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Modo IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Ferramentas Compens");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Estacionar");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplicación");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Copia Espello");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Control Total");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2º Bico X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2º Bico Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2º Bico Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Executando G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Ferramentas UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Punto de inclinación");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Facer Malla Manual");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Colocar Calzo e Medir");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Medir");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Quitar e Medir Cama");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Mover ao Seguinte");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Activar UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Desactivar UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Temp Cama");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Temp Cama");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Temp Bico");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Temp Bico");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Editar Malla");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Edit. Malla Person.");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Axuste Fino da Malla");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Fin Edición da Malla");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Crear Malla Person.");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Crear Malla");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               = _UxGT("Crear Malla (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("Crear Malla (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Crear Malla Fría");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Axustar Altura Malla");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Altura");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Validar Malla");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Validar Malla (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Validar Malla (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Validar Malla perso.");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Quentando Cama");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Quentando Bico");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Traballo manual...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Traballo Lonxit Fixa");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Fin Traballo");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Cancelado");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Saíndo de G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Continuar Malla");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Nivelación Malla");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Nivelación 3Puntos");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Nivelación Grid");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Nivelar Malla");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Puntos Laterais");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Tipo de Mapa ");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Gardar Mapa");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Enviar ao Host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Gardar en CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Backup Externo");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Info do UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Cantidade de Recheo");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Recheo Manual");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Recheo Intelixente");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Recheo da Malla");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Invalidar todo");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Invalidar cercanos");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Axustar Fino Todo");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Axustar Fino Cerc");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Almacenamento Malla");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Rañura Memoria");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Cargar Malla Cama");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Gardar Malla Cama");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("Malla %i Cargada");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("Malla %i Gardada");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Sen Gardar");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Erro: Gardadado UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Erro: Recuperación UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Desfase de Z: ");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Desfase de Z Detido");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL Paso a Paso");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1. Crear Malla Fría");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2. Recheo Intelixente");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3. Validar Malla");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4. Axustar Fino Todo");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5. Validar Malla");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6. Axustar Fino Todo");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7. Gardar Malla Cama");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Control LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Luces");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Axustes Luz");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Vermello");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Laranxa");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Amarelo");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Verde");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Azul");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Índigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Violeta");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Branco");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Por defecto");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Luces personalizadas");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Intensidade Vermello");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Intensidade Verde");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Intensidade Azul");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Intensidade Branco");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Brillo");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Movendo...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Libre XY");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Mover X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Mover Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Mover Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Extrusor");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Extrusor *");
  PROGMEM Language_Str MSG_MOVE_Z_DIST                     = _UxGT("Mover %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Mover 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Mover 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Mover 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Velocidade");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Cama Z");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Bico");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Bico ~");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Cama");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Velocidade vent.");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Velocidade vent. ~");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Fluxo");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Fluxo ~");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Fact");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Escolla");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Escolla *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Acel");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Pasos/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT(" pasos/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT(" pasos/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT(" pasos/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("E pasos/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("* pasos/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Temperatura");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Movemento");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filamento");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E en mm³");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Diam. fil.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Diam. fil. *");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Constraste LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Gardar en memo.");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Cargar de memo.");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Cargar de firm.");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT("Volver a cargar");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Monitorizacion");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Preparar");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Axustar");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pausar impres.");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Seguir impres.");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Deter impres.");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Tarxeta SD");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Sen tarxeta SD");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("En repouso...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("A espera...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Impre. cancelada");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Sen movemento.");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("PROGRAMA MORTO");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("PROGRAMA PARADO");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retraccion mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Cambio retra. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retraccion V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Alzar Z mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("Recup. retra. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("Cambio recup. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("Recuperacion V");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("Retraccion auto.");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Cambiar filamen.");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Cambiar filamen. *");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Iniciando SD");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Cambiar SD");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Sonda-Z sen cama");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Comprobar BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Iniciar BLTouch");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Offset Z");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Micropaso X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Micropaso Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Micropaso Z");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Erro fin carro");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Fallo quentando");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Erro temperatura");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("Temp. excesiva");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("SISTEMA MORTO");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Debe reiniciar!");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Quentando...");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Quentando cama...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Calibracion Delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Calibrar X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Calibrar Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Calibrar Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Calibrar Centro");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("Acerca de...");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Informacion");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Estadisticas");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Placa nai");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termistores");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrusores");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Baudios");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protocolo");
  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Luz");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Total traballos");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Total completos");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Tempo impresion");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Traballo +longo");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Total extruido");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Traballos");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Completos");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Tempo");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("O +longo");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Extruido");
  #endif
  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Min Temp");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Max Temp");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("Fonte alime.");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Potencia motor");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Garda DAC EEPROM");

  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Segue traballo");

  PROGMEM Language_Str MSG_EXPECTED_PRINTER                = _UxGT("Impresora incorrecta");

  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Agarde para", "iniciar troco", "de filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_3_LINE("Agarde pola", "descarga do", "filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Introduza o", "filamento e", "faga click"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_3_LINE("Agarde pola", "carga do", "filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_3_LINE("Agarde para", "seguir co", "traballo"));
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Agarde..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Descargando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Introduza e click"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Cargando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Seguindo..."));
  #endif // LCD_HEIGHT < 4
}
