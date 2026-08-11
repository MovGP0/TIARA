/* Ghidra address: 006fd110 */
/* Ghidra symbol: FUN_006fd110 */


void FUN_006fd110(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_38 [40];
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4f0));
  }
  *(longlong *)(param_1 + 0x4e8) = param_2;
  if (param_2 == 0) {
    FUN_006fd010(param_1,0);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x4f0));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x4e8),param_1);
  }
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (((cVar1 != '\0') && (cVar1 = FUN_0065be20(param_1), cVar1 != '\0')) &&
     (cVar1 = FUN_006fd050(auStack_38), cVar1 != '\0')) {
    FUN_00655b90(param_1);
    return;
  }
  FUN_006fd640(param_1);
  return;
}

