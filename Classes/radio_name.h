#ifndef __SSS_RADNAM1__
// -----------------------------------------------------------------------------
#define __SSS_RADNAM1__
// -----------------------------------------------------------------------------
typedef struct {
    uint16_t freq;
    const uint8_t *name;
} Station;

// -----------------------------------------------------------------------------
// Список радиостанций
static const Station stations[24] = {
    {710,  (const uint8_t *)"Радио России"        },
    {726,  (const uint8_t *)"Радио Маяк"          },
    {879,  (const uint8_t *)"Radio ENERGY"        },
    {883,  (const uint8_t *)"Детское Радио"       },
    {887,  (const uint8_t *)"Radio Record"        },
    {892,  (const uint8_t *)"Такси FM"            },
    {898,  (const uint8_t *)"Радио Ваня"          },
    {902,  (const uint8_t *)"Comedy Radio"        },
    {906,  (const uint8_t *)"Комсомольская Правда"},
    {915,  (const uint8_t *)"Наше Радио"          },
    {1006, (const uint8_t *)"Юмор FM"             },
    {998,  (const uint8_t *)"Relax FM"            },
    {1015, (const uint8_t *)"Радио Шансон"        },
    {1021, (const uint8_t *)"Авторадио"           },
    {1026, (const uint8_t *)"Радио 7"             },
    {1030, (const uint8_t *)"Радиола"             },
    {1035, (const uint8_t *)"Европа Плюс"         },
    {1039, (const uint8_t *)"Новое Радио"         },
    {1043, (const uint8_t *)"Ретро FM"            },
    {1053, (const uint8_t *)"Русское Радио"       },
    {1058, (const uint8_t *)"Эхо Москвы"          },
    {1063, (const uint8_t *)"Дорожное Радио"      },
    {1068, (const uint8_t *)"Love Радио"          },
    {1075, (const uint8_t *)"Монте-Карло"         }
};
// -----------------------------------------------------------------------------
// Поиск имени радиостанции
const uint8_t *get_station_name (int freq) {

    uint8_t st_count = sizeof(stations);

    for (int i = 0; i < st_count; i++) {

        if (stations[i].freq == freq) { return (uint8_t *)stations[i].name; }
    }

    return (uint8_t *)"Неизвестная станция";
}

// -----------------------------------------------------------------------------
/* int main() {
    int my_freq = 1035;
    printf ("Freq %d: %s\n", my_freq, get_station_name (my_freq));
    return 0;
} */
// -----------------------------------------------------------------------------
#endif
// -----------------------------------------------------------------------------