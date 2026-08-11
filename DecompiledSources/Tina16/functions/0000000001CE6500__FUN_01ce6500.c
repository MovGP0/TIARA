/* Ghidra address: 01ce6500 */
/* Ghidra symbol: FUN_01ce6500 */


void FUN_01ce6500(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_c;
  
  local_18 = 0;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d30f00(param_2,&local_c,4);
    uVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_c);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    FUN_01d30f00(param_2,param_1 + 0x58,1);
    FUN_01d30f00(param_2,param_1 + 0x59,1);
    FUN_01d30f00(param_2,param_1 + 0x68,1);
    FUN_01d30f00(param_2,param_1 + 0x94,4);
    FUN_01d30f00(param_2,param_1 + 0x98,4);
    if (0x1f < param_3) {
      FUN_01d316c0(param_2,param_1 + 0x60);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,param_1);
  }
  FUN_00414480(&local_18);
  return;
}

