/* Ghidra address: 01aa3a80 */
/* Ghidra symbol: FUN_01aa3a80 */


void FUN_01aa3a80(longlong param_1,double param_2,double param_3,undefined1 param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined *local_78;
  wchar_t *local_70;
  undefined1 local_59;
  int local_58;
  int local_54;
  double local_50;
  double local_48;
  undefined8 local_40 [3];
  
  local_40[0] = 0;
  local_59 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  if (*(byte *)(param_1 + 1) < 0x50) {
    if (*(byte *)(param_1 + 1) != 0) {
      pdVar4 = (double *)(param_1 + -0x10 + (ulonglong)*(byte *)(param_1 + 1) * 0x18);
      dVar2 = pdVar4[2];
      if (((*(char *)((longlong)pdVar4 + 9) == '\x02') && (PTR_DAT_02004010[0x83a] != '\0')) &&
         (dVar7 = (double)FUN_0040c850(*pdVar4 - (param_2 + param_3)),
         dVar7 <= (dVar2 * *(double *)(PTR_DAT_02004010 + 0x832)) / 100.0)) {
        pdVar4 = (double *)(param_1 + -0x10 + (ulonglong)*(byte *)(param_1 + 1) * 0x18);
        *pdVar4 = local_50 + local_48;
        *(undefined1 *)(pdVar4 + 1) = local_59;
        *(undefined1 *)((longlong)pdVar4 + 9) = 2;
        goto LAB_01aa3cca;
      }
    }
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    pdVar4 = (double *)(param_1 + -0x10 + (ulonglong)*(byte *)(param_1 + 1) * 0x18);
    *pdVar4 = local_50 + local_48;
    *(undefined1 *)(pdVar4 + 1) = local_59;
    *(undefined1 *)((longlong)pdVar4 + 9) = 2;
    pdVar4[2] = local_48;
    uVar3 = (uint)*(byte *)(param_1 + 1);
    local_58 = 0;
    uVar5 = uVar3;
    if (-1 < (int)(uVar3 - 1)) {
      do {
        iVar6 = uVar3 - local_58;
        local_54 = 0;
        if (-1 < iVar6 + -1) {
          pdVar4 = (double *)(param_1 + -0x10);
          do {
            pdVar1 = (double *)(param_1 + -0x10 + (longlong)(local_54 + 1) * 0x18);
            if (*pdVar1 <= *pdVar4 && *pdVar4 != *pdVar1) {
              FUN_01aa3a00(auStack_98,local_54,local_54 + 1);
            }
            local_54 = local_54 + 1;
            pdVar4 = pdVar4 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_58 = local_58 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    local_78 = &DAT_01aa3d48;
    local_70 = L", simulation aborted!";
    FUN_00416cd0(local_40,4,L"Event overflow on (",DAT_02110a70);
    FUN_016fd940(local_40[0]);
    DAT_02110a55 = 1;
  }
LAB_01aa3cca:
  FUN_00414480(local_40);
  return;
}

