/* Ghidra address: 010f12f0 */
/* Ghidra symbol: FUN_010f12f0 */


void FUN_010f12f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01d30f00(local_res10[0],param_1 + 0x60,8);
    FUN_01d30f00(local_res10[0],param_1 + 0x68,8);
    FUN_01d30f00(local_res10[0],param_1 + 0x70,8);
    FUN_01d30f00(local_res10[0],param_1 + 0x78,8);
    FUN_01d30f00(local_res10[0],param_1 + 0x80,0x10);
    FUN_01d30f00(local_res10[0],&local_1c,4);
    lVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_1c);
    *(longlong *)(param_1 + 0xa8) = lVar3;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0xe0);
    (**(code **)(*plVar1 + 0x80))(plVar1,&DAT_010f14e8,param_1);
    FUN_01d30f00(local_res10[0],param_1 + 0x98,4);
    FUN_01d30f00(local_res10[0],param_1 + 0xa0,1);
    FUN_01d30f00(local_res10[0],param_1 + 0x9c,4);
    FUN_01d30f00(local_res10[0],&local_20,4);
    FUN_010f0f10(local_res10,&local_28,local_20,param_3,&local_2c,&local_30,&local_32);
    FUN_00606a20(*(undefined8 *)(param_1 + 0x90),local_28);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x88))(*(longlong **)(param_1 + 0x90),local_2c);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x70))(*(longlong **)(param_1 + 0x90),local_30);
    FUN_00606b80(*(undefined8 *)(param_1 + 0x90),local_32);
  }
  return;
}

