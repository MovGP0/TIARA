/* Ghidra address: 0172cc40 */
/* Ghidra symbol: FUN_0172cc40 */


void FUN_0172cc40(longlong param_1,ushort param_2,ushort param_3,longlong param_4,
                 undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_32 [22];
  undefined4 local_1c;
  
  local_50 = 0;
  local_58 = 0;
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x14) + (uint)param_2 * 0x1a + 2);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_32,0x1a);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),local_1c);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),param_6,0x1f);
  lVar2 = *(longlong *)(param_1 + 8);
  FUN_004169a0(&local_58,param_6);
  FUN_0172ba20(lVar2,&local_50,local_58,*(undefined8 *)(lVar2 + 0x20),0);
  FUN_00416910(local_158,local_50,0xff);
  FUN_00415020(param_6,local_158,param_7);
  local_48 = param_5;
  uVar4 = (uint)param_3;
  iVar3 = 0;
  if (-1 < (int)(uVar4 - 1)) {
    do {
      cVar1 = *(char *)(param_4 + iVar3);
      if (cVar1 == '\x01') {
        FUN_0172a920(*(undefined8 *)(param_1 + 8),local_48,0x1f);
        FUN_00b909d0(&local_48,0x1f);
      }
      else if (cVar1 == '\x02') {
        FUN_0172a920(*(undefined8 *)(param_1 + 8),local_48,2);
        FUN_00b909d0(&local_48,2);
      }
      else if (cVar1 == '\x03') {
        FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_40,8);
        *local_48 = local_40;
        FUN_00b909d0(&local_48,8);
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_00414560(&local_58,2);
  return;
}

