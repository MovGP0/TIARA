/* Ghidra address: 00a3ca70 */
/* Ghidra symbol: FUN_00a3ca70 */


uint FUN_00a3ca70(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_00a3c240(param_1,param_3);
  puVar1 = (undefined1 *)(lVar2 + (longlong)param_2 * 3);
  return (uint)CONCAT12(*puVar1,CONCAT11(puVar1[1],puVar1[2]));
}

