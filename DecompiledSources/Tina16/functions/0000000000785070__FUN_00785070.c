/* Ghidra address: 00785070 */
/* Ghidra symbol: FUN_00785070 */


ulonglong FUN_00785070(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      byte param_5,longlong param_6,char param_7,undefined8 *param_8,
                      undefined4 param_9)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar5;
  undefined1 local_40 [16];
  undefined8 local_30 [2];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  uVar2 = 0;
  uVar3 = (ulonglong)param_5;
  if (uVar3 < 0x11) {
    if (uVar3 == 0x10) {
      uVar2 = 10;
    }
    else {
      if (uVar3 - 5 < 9) {
        if (param_7 == '\x01') {
          FUN_00423c20(local_30,0x10,0x10);
          *param_8 = local_30[0];
        }
        else {
          uVar4 = 0;
        }
        goto LAB_007851e0;
      }
      if (uVar3 == 0xe) {
        uVar2 = 8;
      }
      else {
        if (uVar3 != 0xf) goto LAB_00785125;
        uVar2 = 9;
      }
    }
  }
  else if (uVar3 == 0x11) {
    uVar2 = 0x15;
  }
  else if (uVar3 == 0x12) {
    uVar2 = 0x16;
  }
  else if (uVar3 == 0x13) {
    uVar2 = 0x17;
  }
  else {
LAB_00785125:
    uVar4 = 0;
  }
  if ((char)uVar4 != '\0') {
    if (param_7 == '\x01') {
      if (param_6 == 0) {
        (**(code **)(*param_2 + 0x120))(param_2,local_40,uVar2);
        uVar1 = FUN_00779290(param_2,param_3,local_40,1,param_8,CONCAT44(uVar5,param_9));
        uVar4 = (ulonglong)uVar1;
      }
      else {
        (**(code **)(*param_2 + 0x120))(param_2,local_40,uVar2);
        uVar1 = FUN_007792f0(param_2,param_3,local_40,param_6,1,param_8,param_9);
        uVar4 = (ulonglong)uVar1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
LAB_007851e0:
  return uVar4 & 0xffffffff;
}

