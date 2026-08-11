/* Ghidra address: 00f79100 */
/* Ghidra symbol: FUN_00f79100 */


void FUN_00f79100(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char local_39;
  undefined8 local_38;
  undefined4 local_2c [3];
  
  local_38 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),iVar3);
      if (*(char *)(lVar1 + 0x30) != '\n') {
        local_2c[0] = *(undefined4 *)(lVar1 + 0x3c);
        FUN_00f6f640(lVar1,&local_38);
      }
      *(undefined1 *)(lVar1 + 0x108) = 0;
      *(undefined1 *)(lVar1 + 0x109) = 1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),iVar3);
      if (*(char *)(lVar1 + 0x30) != '\n') {
        local_2c[0] = FUN_00f6f890(lVar1,0,&local_39);
        FUN_00f6f640(lVar1,&local_38);
        if ((local_39 != '\0') &&
           (lVar2 = FUN_00f65130(*(undefined8 *)(param_1 + 0x88),local_2c[0]), lVar2 != 0)) {
          *(undefined1 *)(lVar2 + 0x109) = 1;
        }
        if ((*(char *)(lVar1 + 0x30) == '\x02') || (*(char *)(lVar1 + 0x30) == '\x01')) {
          local_2c[0] = FUN_00f6f890(lVar1,0,&local_39);
          lVar2 = FUN_00f65130(*(undefined8 *)(param_1 + 0x88),local_2c[0]);
          if (lVar2 != 0) {
            *(undefined1 *)(lVar2 + 0x109) = 1;
          }
          local_2c[0] = FUN_00f6f890(lVar1,1,&local_39);
          if ((local_39 != '\0') &&
             (lVar1 = FUN_00f65130(*(undefined8 *)(param_1 + 0x88),local_2c[0]), lVar1 != 0)) {
            *(undefined1 *)(lVar1 + 0x109) = 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,0,local_2c);
  *(bool *)(param_1 + 0x8e0) = lVar1 != 0;
  FUN_00414480(&local_38);
  return;
}

