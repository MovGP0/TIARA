/* Ghidra address: 006814b0 */
/* Ghidra symbol: FUN_006814b0 */


void FUN_006814b0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  uVar3 = FUN_0041b800(local_20);
  cVar1 = FUN_00452340(param_2,&DAT_00681578,uVar3);
  if (cVar1 != '\0') {
    if (param_3 == '\0') {
      if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
        FUN_006807e0(param_1,*(undefined1 *)(param_1 + 0x4d0));
      }
    }
    else {
      uVar2 = FUN_00680640(param_1);
      cVar1 = (**(code **)(*local_20[0] + 0x78))(local_20[0]);
      if (cVar1 != '\0') {
        FUN_006807e0(param_1,1);
      }
      *(undefined1 *)(param_1 + 0x4d0) = uVar2;
    }
  }
  FUN_0041b800(local_20);
  return;
}

