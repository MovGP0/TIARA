/* Ghidra address: 0084f210 */
/* Ghidra symbol: FUN_0084f210 */


undefined8 FUN_0084f210(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x520) == 0) {
    plVar1 = (longlong *)FUN_0068b1b0(&PTR_FUN_0084e5c0,1,param_1);
    FUN_0064dbe0(plVar1,0);
    (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
    plVar1[0x30] = param_1;
    plVar1[0x2f] = (longlong)FUN_0084f6f0;
    FUN_0068bb80(plVar1,1);
    FUN_0068bc30(plVar1,0xb);
    *(longlong **)(param_1 + 0x520) = plVar1;
  }
  return *(undefined8 *)(param_1 + 0x520);
}

