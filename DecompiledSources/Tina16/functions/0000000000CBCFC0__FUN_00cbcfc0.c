/* Ghidra address: 00cbcfc0 */
/* Ghidra symbol: FUN_00cbcfc0 */


void FUN_00cbcfc0(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    puVar1 = local_30;
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x100))(param_1);
      puVar1 = local_30;
    }
  }
  local_30 = puVar1;
  local_20 = (longlong *)param_1[0x20];
  if ((local_20 != (longlong *)0x0) && (*(char *)((longlong)local_20 + 0x124) != '\0')) {
    FUN_00c8d2f0(param_1,3);
    (**(code **)(*local_20 + 0x120))(local_20);
    (**(code **)(*param_1 + 0xa8))(param_1);
    FUN_00c8d2f0(param_1,4);
  }
  return;
}

