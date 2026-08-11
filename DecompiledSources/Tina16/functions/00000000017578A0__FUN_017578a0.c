/* Ghidra address: 017578a0 */
/* Ghidra symbol: FUN_017578a0 */


void FUN_017578a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_1[0xb] != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1[0xb] + 0x80) + 0x28))
                      (*(longlong **)(param_1[0xb] + 0x80));
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 8))(param_1,&local_68,param_2,param_3,param_4);
      FUN_01d048c0(param_1[5],local_68,local_64,&local_3c,&local_40,1,1);
      FUN_01d048c0(param_1[5],local_60,local_5c,&local_44,&local_48,1,1);
      FUN_01a98380(param_2,local_3c,local_40,&local_38,&local_34);
      FUN_01a98380(param_2,local_44,local_48,&local_30,&local_2c);
      local_34 = local_34 + 1;
      local_2c = local_2c + -1;
      local_30 = local_30 + -2;
      local_38 = local_38 + 2;
      (**(code **)(*(longlong *)param_1[0xb] + 0xb0))((longlong *)param_1[0xb],&local_38);
      iVar2 = FUN_00b905f0(local_30 - local_38,local_2c - local_34);
      uVar3 = FUN_0040c770((double)iVar2 * 0.05);
      uVar3 = FUN_00b905f0(0xe,uVar3);
      uVar3 = FUN_00b905e0(8,uVar3);
      lVar1 = param_1[0xb];
      *(undefined4 *)(lVar1 + 0x90) = uVar3;
      *(undefined1 *)(lVar1 + 0xb0) = 1;
      uVar4 = FUN_01a97e00(param_2);
      (**(code **)(*(longlong *)param_1[0xb] + 0xc0))((longlong *)param_1[0xb],uVar4,0);
      FUN_01cea900(param_1[0xb],uVar4);
      FUN_01a97ea0(param_2,uVar4);
    }
  }
  return;
}

