/* Ghidra address: 0180ef70 */
/* Ghidra symbol: FUN_0180ef70 */


void FUN_0180ef70(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  local_30 = FUN_004115a0(*param_1);
  lVar2 = FUN_00589390(local_30);
  local_28 = (int)*(short *)(lVar2 + 0x10);
  local_20 = FUN_004095c0((longlong)(local_28 * 8));
  FUN_00589f00(local_30,local_20);
  local_24 = 0;
  iVar3 = local_28;
  if (-1 < local_28 + -1) {
    do {
      cVar1 = **(char **)**(undefined8 **)(local_20 + (longlong)local_24 * 8);
      if ((cVar1 == '\x05') || ((byte)(cVar1 - 10U) < 2)) {
        FUN_0180edb0(auStack_68);
      }
      else if (cVar1 == '\f') {
        FUN_0180ee70(auStack_68);
      }
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004095f0(local_20,(longlong)(local_28 * 8));
  return;
}

