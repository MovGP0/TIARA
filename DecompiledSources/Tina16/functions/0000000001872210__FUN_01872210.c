/* Ghidra address: 01872210 */
/* Ghidra symbol: FUN_01872210 */


undefined1 FUN_01872210(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong local_30 [2];
  longlong *local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = (longlong *)0x0;
  uVar3 = FUN_0041b800(local_20);
  cVar1 = FUN_00452370(*(undefined8 *)(param_1 + 8),&LAB_018722c8,uVar3);
  if (cVar1 != '\0') {
    (**(code **)(*local_20[0] + 0x20))(local_20[0],local_30,0);
    if (local_30[0] != 0) {
      uVar2 = 1;
      goto LAB_01872274;
    }
  }
  uVar2 = 0;
LAB_01872274:
  FUN_00414480(local_30);
  FUN_0041b800(local_20);
  return uVar2;
}

