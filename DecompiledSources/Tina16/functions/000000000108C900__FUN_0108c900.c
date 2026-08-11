/* Ghidra address: 0108c900 */
/* Ghidra symbol: FUN_0108c900 */


undefined8 FUN_0108c900(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  if (param_2 != 0) {
    for (lVar2 = FUN_006dd580(param_2); lVar2 != 0; lVar2 = FUN_006dd3e0(lVar2)) {
      FUN_004ae7e0(uVar1,lVar2);
    }
  }
  return uVar1;
}

