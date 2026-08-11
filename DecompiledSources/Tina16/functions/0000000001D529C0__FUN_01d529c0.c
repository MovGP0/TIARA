/* Ghidra address: 01d529c0 */
/* Ghidra symbol: FUN_01d529c0 */


void FUN_01d529c0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_38;
  double local_30 [3];
  
  if ((param_4 == '\x01') || ((byte)(param_4 - 5U) < 3)) {
    dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],0,0);
    dVar2 = (*(double *)(param_1 + 0x30) * 1e-06) / *(double *)(param_1 + 0x20);
    dVar3 = (*(double *)(param_1 + 0x48) * 1e-06) / *(double *)(param_1 + 0x38);
    if (dVar1 < 0.0) {
      if (dVar1 < 0.0) {
        local_30[0] = *(double *)(param_1 + 0x38) * dVar1;
        local_38 = *(double *)(param_1 + 0x38);
        if (-*(double *)(param_1 + 0x48) - dVar3 <= dVar1) {
          if (-*(double *)(param_1 + 0x48) + dVar3 <= dVar1) {
            if (dVar1 <= *(double *)(param_1 + 0x48) + dVar3) {
              if (*(double *)(param_1 + 0x48) - dVar3 < dVar1) {
                FUN_00daa300(dVar1,*(undefined8 *)(param_1 + 0x48),
                             *(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x48),dVar3,
                             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                             local_30,&local_38);
              }
            }
            else {
              local_30[0] = *(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x48) +
                            *(double *)(param_1 + 0x40) * (dVar1 - *(double *)(param_1 + 0x48));
              local_38 = *(double *)(param_1 + 0x40);
            }
          }
          else {
            FUN_00daa300(dVar1,*(ulonglong *)(param_1 + 0x48) ^ 0x8000000000000000,
                         -*(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x48),-dVar3,
                         *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),local_30,
                         &local_38);
          }
        }
        else {
          local_30[0] = -*(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x48) +
                        *(double *)(param_1 + 0x40) * (dVar1 + *(double *)(param_1 + 0x48));
          local_38 = *(double *)(param_1 + 0x40);
        }
      }
    }
    else {
      local_30[0] = *(double *)(param_1 + 0x20) * dVar1;
      local_38 = *(double *)(param_1 + 0x20);
      if (-*(double *)(param_1 + 0x30) - dVar2 <= dVar1) {
        if (-*(double *)(param_1 + 0x30) + dVar2 <= dVar1) {
          if (dVar1 <= *(double *)(param_1 + 0x30) + dVar2) {
            if (*(double *)(param_1 + 0x30) - dVar2 < dVar1) {
              FUN_00daa300(dVar1,*(undefined8 *)(param_1 + 0x30),
                           *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x30),dVar2,
                           *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_30,
                           &local_38);
            }
          }
          else {
            local_30[0] = *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x30) +
                          *(double *)(param_1 + 0x28) * (dVar1 - *(double *)(param_1 + 0x30));
            local_38 = *(double *)(param_1 + 0x28);
          }
        }
        else {
          FUN_00daa300(dVar1,*(ulonglong *)(param_1 + 0x30) ^ 0x8000000000000000,
                       -*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x30),dVar2,
                       *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),local_30,
                       &local_38);
        }
      }
      else {
        local_30[0] = -*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x30) +
                      *(double *)(param_1 + 0x28) * (dVar1 + *(double *)(param_1 + 0x30));
        local_38 = *(double *)(param_1 + 0x28);
      }
    }
    FUN_016ed320(param_2,*param_1 + '\x02',local_30[0] - local_38 * dVar1,local_38,0);
  }
  return;
}

