#include <stdio.h>
#include <math.h>
#include "../Headers/total.h" /* Ñèìâîë '../' - escape-ñèìâîë - èñïîëüçóåòñÿ äëÿ ïåðåõîäà íà îäèí óðîâåíü âûøå;
                                Ýòîò ñèìâîë èñïîëüçóåòñÿ ñòîëüêî ðàç, íà ñêîëüêî óðîâíåé íóæíî ïîäíÿòüñÿ; */

double selectionswitchTemperature(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Градус Делиля;\n"
           "2 - Градус Кельвина;\n"
           "3 - Градус Ньтона;\n"
           "4 - Градус Ранкина;\n"
           "5 - Градус Реомюра;\n"
           "6 - Градус Рёмера;\n"
           "7 - Градус Цельсия;\n"
           "8 - Градус Фаренгейта;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 9 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Градус Делиля;\n"
           "2 - Градус Кельвина;\n"
           "3 - Градус Ньтона;\n"
           "4 - Градус Ранкина;\n"
           "5 - Градус Реомюра;\n"
           "6 - Градус Рёмера;\n"
           "7 - Градус Цельсия;\n"
           "8 - Градус Фаренгейта;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.output_choice >= 9 || key.input_choice == 0)  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = DelislesTOKelvins(MEASUREMENT);
            break;
        case 13:
            key.gate = DelislesTONewtons(MEASUREMENT);
            break;
        case 14:
            key.gate = DelislesTORankines(MEASUREMENT);
            break;
        case 15:
            key.gate = DelislesTOReaumurs(MEASUREMENT);
            break;
        case 16:
            key.gate = DelislesTORomers(MEASUREMENT);
            break;
        case 17:
            key.gate = DelislesTOCelsius(MEASUREMENT);
            break;
        case 18:
            key.gate = DelislesTOFahrenheits(MEASUREMENT);
            break;
        case 21:
            key.gate = KelvinsTODelisles(MEASUREMENT);
            break;
        case 23:
            key.gate = KelvinsTONewtons(MEASUREMENT);
            break;
        case 24:
            key.gate = KelvinsTORankines(MEASUREMENT);
            break;
        case 25:
            key.gate = KelvinsTOReaumurs(MEASUREMENT);
            break;
        case 26:
            key.gate = KelvinsTORomers(MEASUREMENT);
            break;
        case 27:
            key.gate = KelvinsTOCelsius(MEASUREMENT);
            break;
        case 28:
            key.gate = KelvinsTOFahrenheits(MEASUREMENT);
            break;
        case 31:
            key.gate = NewtonsTODelisles(MEASUREMENT);
            break;
        case 32:
            key.gate = NewtonsTOKelvins(MEASUREMENT);
            break;
        case 34:
            key.gate = NewtonsTORankines(MEASUREMENT);
            break;
        case 35:
            key.gate = NewtonsTOReaumurs(MEASUREMENT);
            break;
        case 36:
            key.gate = NewtonsTORomers(MEASUREMENT);
            break;
        case 37:
            key.gate = NewtonsTOCelsius(MEASUREMENT);
            break;
        case 38:
            key.gate = NewtonsTOFahrenheits(MEASUREMENT);
            break;
        case 41:
            key.gate = RankinesTODelisles(MEASUREMENT);
            break;
        case 42:
            key.gate = RankinesTOKelvins(MEASUREMENT);
            break;
        case 43:
            key.gate = RankinesTONewtons(MEASUREMENT);
            break;
        case 45:
            key.gate = RankinesTOReaumurs(MEASUREMENT);
            break;
        case 46:
            key.gate = RankinesTORomers(MEASUREMENT);
            break;
        case 47:
            key.gate = RankinesTOCelsius(MEASUREMENT);
            break;
        case 48:
            key.gate = RankinesTOFahrenheits(MEASUREMENT);
            break;
        case 51:
            key.gate = ReaumursTODelisles(MEASUREMENT);
            break;
        case 52:
            key.gate = ReaumursTOKelvins(MEASUREMENT);
            break;
        case 53:
            key.gate = ReaumursTONewtons(MEASUREMENT);
            break;
        case 54:
            key.gate = ReaumursTORankines(MEASUREMENT);
            break;
        case 56:
            key.gate = ReaumursTORomers(MEASUREMENT);
            break;
        case 57:
            key.gate = ReaumursTOCelsius(MEASUREMENT);
            break;
        case 58:
            key.gate = ReaumursTOFahrenheits(MEASUREMENT);
            break;
        case 61:
            key.gate = RomersTODelisles(MEASUREMENT);
            break;
        case 62:
            key.gate = RomersTOKelvins(MEASUREMENT);
            break;
        case 63:
            key.gate = RomersTONewtons(MEASUREMENT);
            break;
        case 64:
            key.gate = RomersTORankines(MEASUREMENT);
            break;
        case 65:
            key.gate = RomersTOReaumurs(MEASUREMENT);
            break;
        case 67:
            key.gate = RomersTOCelsius(MEASUREMENT);
            break;
        case 68:
            key.gate = RomersTOFahrenheits(MEASUREMENT);
            break;
        case 71:
            key.gate = CelsiusTODelisles(MEASUREMENT);
            break;
        case 72:
            key.gate = CelsiusTOKelvins(MEASUREMENT);
            break;
        case 73:
            key.gate = CelsiusTONewtons(MEASUREMENT);
            break;
        case 74:
            key.gate = CelsiusTORankines(MEASUREMENT);
            break;
        case 75:
            key.gate = CelsiusTOReaumurs(MEASUREMENT);
            break;
        case 76:
            key.gate = CelsiusTORomers(MEASUREMENT);
            break;
        case 78:
            key.gate = CelsiusTOFahrenheits(MEASUREMENT);
            break;
        case 81:
            key.gate = FahrenheitsTODelisles(MEASUREMENT);
            break;
        case 82:
            key.gate = FahrenheitsTOKelvins(MEASUREMENT);
            break;
        case 83:
            key.gate = FahrenheitsTONewtons(MEASUREMENT);
            break;
        case 84:
            key.gate = FahrenheitsTORankines(MEASUREMENT);
            break;
        case 85:
            key.gate = FahrenheitsTOReaumurs(MEASUREMENT);
            break;
        case 86:
            key.gate = FahrenheitsTORomers(MEASUREMENT);
            break;
        case 87:
            key.gate = FahrenheitsTOCelsius(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
