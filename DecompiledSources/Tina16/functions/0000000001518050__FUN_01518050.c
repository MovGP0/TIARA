/* Ghidra address: 01518050 */
/* Ghidra symbol: FUN_01518050 */


void FUN_01518050(longlong param_1,undefined8 param_2,double *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  bool local_32;
  undefined1 local_31;
  undefined8 local_30;
  int local_24;
  
  local_50 = auStack_78;
  *(ushort *)(param_1 + 0xae) = *(ushort *)(param_1 + 0xac) % *(ushort *)(param_1 + 0x98);
  *param_3 = (double)*(ushort *)(param_1 + 0xac) * *(double *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xa8) == '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),local_24);
        local_48 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
        if ((*(longlong *)(local_48 + 0x58) != 0) && (*(longlong *)(local_48 + 0xa8) != 0)) {
          local_32 = false;
          if (*(double *)(local_48 + 0x118) <= *param_3) {
            while (local_32 == false) {
              *(undefined8 *)(local_48 + 0x128) = *(undefined8 *)(local_48 + 0x118);
              *(undefined1 *)(local_48 + 0x120) = *(undefined1 *)(local_48 + 0x114);
              cVar1 = (**(code **)(**(longlong **)(local_48 + 0xa8) + 0x30))
                                (*(longlong **)(local_48 + 0xa8),&local_30,&local_31,0);
              if (cVar1 == '\0') {
                local_32 = true;
              }
              else {
                *(undefined8 *)(local_48 + 0x118) = local_30;
                *(undefined1 *)(local_48 + 0x114) = local_31;
                local_32 = *param_3 <= *(double *)(local_48 + 0x118) &&
                           *(double *)(local_48 + 0x118) != *param_3;
              }
            }
          }
          *(undefined1 *)
           (*(longlong *)(param_1 + 200) +
            (longlong)(int)(local_24 * (uint)*(ushort *)(param_1 + 0x98)) +
           (ulonglong)*(ushort *)(param_1 + 0xae)) = *(undefined1 *)(local_48 + 0x120);
        }
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    local_50 = auStack_78;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),local_24);
        local_40 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
        if ((*(longlong *)(local_40 + 0x58) != 0) && (*(longlong *)(local_40 + 0xa8) != 0)) {
          (**(code **)(**(longlong **)(local_40 + 0xa8) + 0x10))
                    (*(longlong **)(local_40 + 0xa8),*(longlong *)(local_40 + 0x58),1);
          local_32 = false;
          while (local_32 == false) {
            *(undefined8 *)(local_40 + 0x128) = *(undefined8 *)(local_40 + 0x118);
            *(undefined1 *)(local_40 + 0x120) = *(undefined1 *)(local_40 + 0x114);
            cVar1 = (**(code **)(**(longlong **)(local_40 + 0xa8) + 0x30))
                              (*(longlong **)(local_40 + 0xa8),&local_30,&local_31,0);
            if (cVar1 == '\0') {
              local_32 = true;
            }
            else {
              *(undefined8 *)(local_40 + 0x118) = local_30;
              *(undefined1 *)(local_40 + 0x114) = local_31;
              local_32 = *param_3 <= *(double *)(local_40 + 0x118) &&
                         *(double *)(local_40 + 0x118) != *param_3;
            }
          }
          if (*(double *)(local_40 + 0x118) == 0.0) {
            *(undefined1 *)(local_40 + 0x120) = *(undefined1 *)(local_40 + 0x114);
          }
          *(undefined1 *)
           (*(longlong *)(param_1 + 200) +
            (longlong)(int)(local_24 * (uint)*(ushort *)(param_1 + 0x98)) +
           (ulonglong)*(ushort *)(param_1 + 0xae)) = *(undefined1 *)(local_40 + 0x120);
        }
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}

