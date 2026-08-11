/* Ghidra address: 007fbf00 */
/* Ghidra symbol: FUN_007fbf00 */


void FUN_007fbf00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(ushort *)(param_1 + 0x34) & 0x10) != 0) &&
       (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_007f0370), cVar2 != '\0')) &&
      (lVar1 = *(longlong *)(param_1 + 0x78), *(longlong *)(lVar1 + 0x510) != 0)) &&
     (lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x510) + 0x78))(*(longlong **)(lVar1 + 0x510)),
     lVar3 == param_1)) {
    plVar4 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if ((cVar2 != '\0') && (cVar2 = FUN_0065eb60(param_1), cVar2 != '\0')) {
      return;
    }
    (**(code **)(**(longlong **)(lVar1 + 0x510) + 0x58))(*(longlong **)(lVar1 + 0x510));
  }
  return;
}

