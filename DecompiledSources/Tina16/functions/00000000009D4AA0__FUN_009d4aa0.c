/* Ghidra address: 009d4aa0 */
/* Ghidra symbol: FUN_009d4aa0 */


longlong * FUN_009d4aa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)0x0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
    lVar1 = FUN_009d4120(*(undefined8 *)(lVar1 + 0x68));
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_00985360(&PTR_FUN_00924e80,1,0);
      uVar3 = FUN_009d4120(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x68));
      (**(code **)(*plVar2 + 0x88))(plVar2,uVar3);
    }
  }
  return plVar2;
}

