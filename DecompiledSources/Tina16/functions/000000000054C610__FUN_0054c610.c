/* Ghidra address: 0054c610 */
/* Ghidra symbol: FUN_0054c610 */


undefined8 FUN_0054c610(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)FUN_00547190();
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00589390(*plVar1);
    uVar2 = *puVar3;
  }
  return uVar2;
}

