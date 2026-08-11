/* Ghidra address: 00f13e30 */
/* Ghidra symbol: FUN_00f13e30 */


void FUN_00f13e30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2[0xf]);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))
            ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
  FUN_005fd640(param_2[0xf],0xf);
  (**(code **)(*param_2 + 200))
            (param_2,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  (**(code **)(*param_2 + 0xc0))
            (param_2,*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0),
             *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar1);
  FUN_00410f20(plVar1);
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
  }
  return;
}

