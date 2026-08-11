/* Ghidra address: 010ef4e0 */
/* Ghidra symbol: FUN_010ef4e0 */


void FUN_010ef4e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  plVar2 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2[0xf]);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2[0x10]);
  FUN_005fd4e0(param_2[0xf],0);
  FUN_005fd670(param_2[0xf],2);
  FUN_005fd6d0(param_2[0xf],1);
  FUN_005fd640(param_2[0xf],0xf);
  FUN_005fdcb0(param_2[0x10],1);
  (**(code **)(*param_2 + 0xf8))
            (param_2,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
             *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar1);
  (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar2);
  FUN_00410f20(plVar1);
  FUN_00410f20(plVar2);
  return;
}

