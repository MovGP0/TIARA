/* Ghidra address: 006a04f0 */
/* Ghidra symbol: FUN_006a04f0 */


void FUN_006a04f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [4];
  int local_34;
  int local_2c;
  
  FUN_008073d0(param_1,param_2);
  FUN_0064d000(param_1,local_38);
  iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,0x20);
  iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,0x21);
  FUN_00423b10(local_38,-iVar1,-iVar2);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 < 0xf) {
    if (iVar1 == 0xe) {
      if (*(short *)(param_2 + 0x12) < local_34) {
        *(undefined8 *)(param_2 + 0x18) = 0xc;
        return;
      }
      *(undefined8 *)(param_2 + 0x18) = 0xb;
      return;
    }
    if (iVar1 == 1) {
      *(undefined8 *)(param_2 + 0x18) = 2;
      return;
    }
    if (iVar1 != 4) {
      if (iVar1 != 0xd) {
        return;
      }
      if (*(short *)(param_2 + 0x12) < local_34) {
        *(undefined8 *)(param_2 + 0x18) = 0xc;
        return;
      }
      *(undefined8 *)(param_2 + 0x18) = 10;
      return;
    }
  }
  else {
    if (iVar1 == 0x10) {
      if (local_2c < *(short *)(param_2 + 0x12)) {
        *(undefined8 *)(param_2 + 0x18) = 0xf;
        return;
      }
      *(undefined8 *)(param_2 + 0x18) = 10;
      return;
    }
    if (iVar1 != 0x11) {
      return;
    }
  }
  if (local_2c < *(short *)(param_2 + 0x12)) {
    *(undefined8 *)(param_2 + 0x18) = 0xf;
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 0xb;
  }
  return;
}

