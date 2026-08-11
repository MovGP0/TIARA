/* Ghidra address: 01755ba0 */
/* Ghidra symbol: FUN_01755ba0 */


void FUN_01755ba0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_1[0xb] != 0) {
    (**(code **)(*param_1 + 8))(param_1,&local_58,param_2,param_3,param_4);
    FUN_01d048c0(param_1[5],local_58,local_54,&local_3c,&local_40,1,1);
    FUN_01d048c0(param_1[5],local_50,local_4c,&local_44,&local_48,1,1);
    FUN_01a98380(param_2,local_3c,local_40,&local_38,&local_34);
    FUN_01a98380(param_2,local_44,local_48,&local_30,&local_2c);
    local_30 = local_30 + -1;
    local_38 = local_38 + 1;
    (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_38);
    iVar1 = FUN_00b905f0(local_30 - local_38,local_2c - local_34);
    uVar2 = FUN_0040c770((double)iVar1 * 0.05);
    uVar2 = FUN_00b905f0(0xe,uVar2);
    uVar2 = FUN_00b905e0(8,uVar2);
    *(undefined4 *)(param_1[0xb] + 0x90) = uVar2;
    uVar3 = FUN_01a97e00(param_2);
    (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar3,0);
    FUN_01ceaa70(param_1[0xb],uVar3);
    FUN_01a97ea0(param_2,uVar3);
  }
  return;
}

