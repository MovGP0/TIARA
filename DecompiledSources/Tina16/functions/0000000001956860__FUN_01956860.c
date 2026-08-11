/* Ghidra address: 01956860 */
/* Ghidra symbol: FUN_01956860 */


void FUN_01956860(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  
  FUN_005fdcb0(param_2[0x10],*(undefined1 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 8) != 0x1fffffff) {
    FUN_005fdab0(param_2[0x10],*(int *)(param_1 + 8));
    FUN_005fdcb0(param_2[0x10],0);
    FUN_00498350(local_38,param_3,param_4,param_5,param_6);
    (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 0) {
    uVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 0xc));
    uVar3 = thunk_FUN_04116d68(bVar1 - 2,uVar2);
    uVar4 = FUN_005ffa40(param_2);
    uVar4 = thunk_FUN_041a19a1(uVar4,uVar3);
    FUN_0180c8a0(param_2,1);
    uVar2 = FUN_005fd660(param_2[0xf]);
    FUN_005fd670(param_2[0xf],5);
    (**(code **)(*param_2 + 0xf8))(param_2,param_3,param_4,param_5 + 1,param_6 + 1);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_041a19a1(uVar5,uVar4);
    thunk_FUN_0416f828(uVar3);
    FUN_005fd670(param_2[0xf],uVar2);
  }
  return;
}

