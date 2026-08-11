/* Ghidra address: 00d9ad60 */
/* Ghidra symbol: FUN_00d9ad60 */


ulonglong FUN_00d9ad60(undefined8 param_1,longlong param_2,undefined8 param_3,byte param_4,
                      char param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  uVar3 = (ulonglong)param_4;
  if (uVar3 < 6) {
    if (uVar3 != 5) {
      if (uVar3 == 2) {
        if (param_5 == '\x01') {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),2);
          *param_6 = uVar1;
        }
        else {
          uVar2 = FUN_00784f60();
          uVar5 = (ulonglong)uVar2;
        }
        goto LAB_00d9afb2;
      }
      if (uVar3 == 3) {
        if (param_5 == '\x02') {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x47);
          *param_6 = *(undefined4 *)(lVar4 + 0x28);
        }
        else if (param_5 == '\t') {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
          *param_6 = uVar1;
        }
        else if (param_5 == '\n') {
          uVar1 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
          *param_6 = uVar1;
        }
        else {
          uVar2 = FUN_00784f60();
          uVar5 = (ulonglong)uVar2;
        }
        goto LAB_00d9afb2;
      }
      if (uVar3 == 4) {
        if (param_5 == '\x02') {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x47);
          *param_6 = *(undefined4 *)(lVar4 + 0x28);
        }
        else {
          uVar2 = FUN_00784f60();
          uVar5 = (ulonglong)uVar2;
        }
        goto LAB_00d9afb2;
      }
LAB_00d9af97:
      uVar2 = FUN_00784f60();
      uVar5 = (ulonglong)uVar2;
      goto LAB_00d9afb2;
    }
LAB_00d9af04:
    if (param_5 == '\x01') {
      lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x47);
      *param_6 = *(undefined4 *)(lVar4 + 0x28);
    }
    else {
      uVar2 = FUN_00784f60();
      uVar5 = (ulonglong)uVar2;
    }
  }
  else {
    if (1 < uVar3 - 6) {
      if (uVar3 == 8) goto LAB_00d9af04;
      if (1 < uVar3 - 9) goto LAB_00d9af97;
    }
    if (param_5 == '\x01') {
      lVar4 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x48);
      *param_6 = *(undefined4 *)(lVar4 + 0x28);
    }
    else {
      uVar2 = FUN_00784f60();
      uVar5 = (ulonglong)uVar2;
    }
  }
LAB_00d9afb2:
  return uVar5 & 0xffffffff;
}

