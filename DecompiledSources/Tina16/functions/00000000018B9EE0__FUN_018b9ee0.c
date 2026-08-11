/* Ghidra address: 018b9ee0 */
/* Ghidra symbol: FUN_018b9ee0 */


void FUN_018b9ee0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  uVar2 = FUN_0041b800(local_20);
  cVar1 = FUN_00452370(param_2,&DAT_018b9f98,uVar2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*local_20[0] + 0x28))(local_20[0],*(undefined1 *)(param_1 + 200));
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x80) + 0x58;
      }
      (**(code **)(*local_20[0] + 0x20))(local_20[0],*(undefined1 *)(param_1 + 200),lVar3);
    }
  }
  FUN_0041b800(local_20);
  return;
}

