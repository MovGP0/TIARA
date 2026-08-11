/* Ghidra address: 00a3cb50 */
/* Ghidra symbol: FUN_00a3cb50 */


uint FUN_00a3cb50(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00a3c240(param_1,param_3);
  uVar1 = *(undefined1 *)(lVar2 + param_2);
  return (uint)CONCAT12(uVar1,CONCAT11(uVar1,uVar1));
}

