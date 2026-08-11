/* Ghidra address: 0144c1c0 */
/* Ghidra symbol: FUN_0144c1c0 */


void FUN_0144c1c0(int param_1,undefined8 *param_2,char param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,double param_10,
                 double param_11,double param_12,double param_13,undefined8 param_14,
                 longlong param_15)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 local_cb8 [403];
  
  puVar2 = local_cb8;
  for (lVar1 = 400; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)(param_15 + 0x92) == '\0') {
    if (param_1 == -1) {
      if (param_3 < '\x06') {
        if (param_3 == '\x05') {
          if (param_8 == 0.0) {
            FUN_014496a0(1,1,0,1.0 / (param_7 * 2.0),param_14,1.0 / param_7,0,
                         *(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
            FUN_014496a0(1,1,1.0 / (param_7 * 2.0),1.0 / param_7,param_14,1.0 / param_7,
                         1.0 / (param_7 * 2.0),-*(double *)(param_15 + 0xa0) * param_4,0,0,0,0,
                         param_15);
          }
          else {
            FUN_014496a0(1,1,0,param_8,param_14,1.0 / param_7,0,
                         (*(double *)(param_15 + 0xa0) * param_4) / param_8,0x3ff0000000000000,0,0,0
                         ,param_15);
            FUN_014496a0(1,1,param_8,1.0 / (param_7 * 2.0) - param_8,param_14,1.0 / param_7,0,
                         *(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
            FUN_014496a0(1,1,1.0 / (param_7 * 2.0) - param_8,1.0 / (param_7 * 2.0) + param_8,
                         param_14,1.0 / param_7,1.0 / (param_7 * 2.0),
                         (-*(double *)(param_15 + 0xa0) * param_4) / param_8,0x3ff0000000000000,0,0,
                         0,param_15);
            FUN_014496a0(1,1,1.0 / (param_7 * 2.0) + param_8,1.0 / param_7 - param_8,param_14,
                         1.0 / param_7,0,-*(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
            FUN_014496a0(1,1,1.0 / param_7 - param_8,1.0 / param_7,param_14,1.0 / param_7,
                         1.0 / param_7,(*(double *)(param_15 + 0xa0) * param_4) / param_8,
                         0x3ff0000000000000,0,0,0,param_15);
          }
        }
        else if (param_3 == '\x01') {
          if (*(double *)(param_15 + 0xa0) != 0.0) {
            FUN_014496a0(1,0,0,0,param_14,0x4049000000000000,0,
                         *(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
            FUN_014496a0(1,0,param_8,0,0,0x4049000000000000,0,
                         -*(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
          }
        }
        else if (param_3 == '\x02') {
          if (*(double *)(param_15 + 0xa0) != 0.0) {
            FUN_014496a0(1,0,param_8,0,param_14,0x4049000000000000,0,
                         *(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
          }
        }
        else if (param_3 == '\x03') {
          if (*(double *)(param_15 + 0xa0) != 0.0) {
            FUN_014496a0(1,1,0,param_8,param_14,1.0 / param_7,0,
                         (*(double *)(param_15 + 0xa0) * param_4) / param_8,0x3ff0000000000000,0,0,0
                         ,param_15);
            FUN_014496a0(1,1,param_8,param_8 + param_9,param_14,1.0 / param_7,0,
                         *(double *)(param_15 + 0xa0) * param_4,0,0,0,0,param_15);
            FUN_014496a0(1,1,param_8 + param_9,param_8 + param_9 + param_10,param_14,1.0 / param_7,0
                         ,(-*(double *)(param_15 + 0xa0) * param_4) / param_10,0x3ff0000000000000,0,
                         0,0,param_15);
            FUN_014496a0(1,1,param_8 + param_9 + param_10,param_8 + param_9 + param_10 + param_11,
                         param_14,1.0 / param_7,0,
                         (*(double *)(param_15 + 0xa0) * param_5) / param_11,0x3ff0000000000000,0,0,
                         0,param_15);
            FUN_014496a0(1,1,param_8 + param_9 + param_10 + param_11,
                         param_8 + param_9 + param_10 + param_11 + param_12,param_14,1.0 / param_7,0
                         ,*(double *)(param_15 + 0xa0) * param_5,0,0,0,0,param_15);
            FUN_014496a0(1,1,param_8 + param_9 + param_10 + param_11 + param_12,
                         param_8 + param_9 + param_10 + param_11 + param_12 + param_13,param_14,
                         1.0 / param_7,0,(-*(double *)(param_15 + 0xa0) * param_5) / param_13,
                         0x3ff0000000000000,0,0,0,param_15);
          }
        }
        else if ((param_3 == '\x04') && (*(double *)(param_15 + 0xa0) != 0.0)) {
          FUN_014496a0(0,0,0,0,param_14,0x4049000000000000,0,*(double *)(param_15 + 0xa0) * param_4,
                       0,0,param_7 * 6.283185307179586,param_6 * 0.017453292519943295,param_15);
        }
      }
      else if (param_3 == '\x06') {
        FUN_014496a0(1,1,0,1.0 / (param_7 * 4.0),param_14,1.0 / param_7,0,
                     *(double *)(param_15 + 0xa0) * param_4 * 4.0 * param_7,0x3ff0000000000000,0,0,0
                     ,param_15);
        FUN_014496a0(1,1,1.0 / (param_7 * 4.0),3.0 / (param_7 * 4.0),param_14,1.0 / param_7,
                     2.0 / (param_7 * 4.0),-*(double *)(param_15 + 0xa0) * param_4 * 4.0 * param_7,
                     0x3ff0000000000000,0,0,0,param_15);
        FUN_014496a0(1,1,3.0 / (param_7 * 4.0),1.0 / param_7,param_14,1.0 / param_7,1.0 / param_7,
                     *(double *)(param_15 + 0xa0) * param_4 * 4.0 * param_7,0x3ff0000000000000,0,0,0
                     ,param_15);
      }
      else if (param_3 == '\a') {
        if (*(double *)(param_15 + 0xa0) != 0.0) {
          FUN_014496a0(0,0,0,0,param_14,0x4049000000000000,0,*(double *)(param_15 + 0xa0) * param_4,
                       0,0,param_7 * 6.283185307179586,param_6 * 0.017453292519943295,param_15);
        }
      }
      else if (param_3 == '\x10') {
        FUN_014496a0(1,1,0,0,param_14,0x4049000000000000,0,*(double *)(param_15 + 0xa0) * param_4,0,
                     0,0,0,param_15);
      }
    }
    else {
      if (param_3 < '\x05') {
        if (param_3 == '\x04') {
          if (param_1 < 1) {
            return;
          }
          puVar2 = local_cb8 + 2;
          do {
            dVar3 = (double)FUN_0040c850(*puVar2);
            if (1e-100 <= dVar3) {
              FUN_014496a0(0,0,0,0,param_14,0x4049000000000000,0,
                           *(double *)(param_15 + 0xa0) * 2.0 * param_4 * (double)puVar2[-2],0,
                           puVar2[-1],*puVar2,(double)puVar2[1] - param_6 * 0.017453292519943295,
                           param_15);
            }
            else {
              FUN_014496a0(0,0,0,0,param_14,0x4049000000000000,0,
                           *(double *)(param_15 + 0xa0) * param_4 * (double)puVar2[-2],0,puVar2[-1],
                           0,0,param_15);
            }
            puVar2 = puVar2 + 5;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
          return;
        }
        if (param_3 == '\x01') {
          if (param_1 < 1) {
            return;
          }
          puVar2 = local_cb8 + 2;
          do {
            FUN_019b7940(param_15);
            dVar3 = (double)FUN_0040c850(*puVar2);
            if (1e-100 <= dVar3) {
              FUN_014496a0(1,0,0,0,param_14,0x4049000000000000,0,
                           *(double *)(param_15 + 0xa0) * 2.0 * param_4 * (double)puVar2[-2],0,
                           puVar2[-1],*puVar2,puVar2[1],param_15);
              FUN_014496a0(1,0,param_8,0,param_14,0x4049000000000000,param_8,
                           *(double *)(param_15 + 0xa0) * -2.0 * param_4 * (double)puVar2[-2],0,
                           puVar2[-1],*puVar2,puVar2[1],param_15);
            }
            else {
              FUN_014496a0(1,0,0,0,param_14,0x4049000000000000,0,
                           *(double *)(param_15 + 0xa0) * param_4 * (double)puVar2[-2],0,puVar2[-1],
                           0,0,param_15);
              FUN_014496a0(1,0,param_8,0,param_14,0x4049000000000000,param_8,
                           -*(double *)(param_15 + 0xa0) * param_4 * (double)puVar2[-2],0,puVar2[-1]
                           ,0,0,param_15);
            }
            puVar2 = puVar2 + 5;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
          return;
        }
        if (param_3 != '\x02') {
          return;
        }
      }
      else {
        if (param_3 == '\a') {
          if (param_1 < 1) {
            return;
          }
          puVar2 = local_cb8 + 2;
          do {
            dVar3 = (double)FUN_0040c850(*puVar2);
            if (1e-100 <= dVar3) {
              FUN_014496a0(0,0,0,0,param_14,0x4049000000000000,0,
                           *(double *)(param_15 + 0xa0) * 2.0 * param_4 * (double)puVar2[-2],0,
                           puVar2[-1],*puVar2,(double)puVar2[1] - param_6 * 0.017453292519943295,
                           param_15);
            }
            else {
              FUN_014496a0(0,0,0,0,param_14,0x4049000000000000,0,
                           *(double *)(param_15 + 0xa0) * param_4 * (double)puVar2[-2],0,puVar2[-1],
                           0,0,param_15);
            }
            puVar2 = puVar2 + 5;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
          return;
        }
        if (param_3 != '\x10') {
          return;
        }
      }
      if (0 < param_1) {
        puVar2 = local_cb8 + 2;
        do {
          dVar3 = (double)FUN_0040c850(*puVar2);
          if (1e-100 <= dVar3) {
            FUN_014496a0(1,0,param_8,0,param_14,0x4049000000000000,param_8,
                         *(double *)(param_15 + 0xa0) * 2.0 * param_4 * (double)puVar2[-2],0,
                         puVar2[-1],*puVar2,puVar2[1],param_15);
          }
          else {
            FUN_014496a0(1,0,param_8,0,param_14,0x4049000000000000,param_8,
                         *(double *)(param_15 + 0xa0) * param_4 * (double)puVar2[-2],0,puVar2[-1],0,
                         0,param_15);
          }
          puVar2 = puVar2 + 5;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
    }
  }
  return;
}

