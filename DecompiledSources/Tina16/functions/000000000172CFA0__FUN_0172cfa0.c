/* Ghidra address: 0172cfa0 */
/* Ghidra symbol: FUN_0172cfa0 */


void FUN_0172cfa0(longlong param_1,uint param_2,longlong *param_3,undefined8 *param_4,
                 undefined8 *param_5,ushort *param_6,short *param_7,short *param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  char local_7d [42];
  undefined1 local_53 [17];
  short local_42;
  undefined4 local_40;
  
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + 1);
  *param_8 = 0;
  param_2 = param_2 & 0xff;
  if (-1 < (int)(param_2 - 1)) {
    do {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),local_53,0x1b);
      *param_8 = *param_8 + local_42;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_53,0x1b);
  FUN_0172a910(*(undefined8 *)(param_1 + 8),local_40);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),param_6,2);
  lVar1 = FUN_00409570(*param_6);
  *param_3 = lVar1;
  *param_7 = 0;
  uVar4 = (uint)*param_6;
  iVar3 = 0;
  if (-1 < (int)(uVar4 - 1)) {
    do {
      FUN_0172a920(*(undefined8 *)(param_1 + 8),local_7d,0x2a);
      *(char *)(*param_3 + (longlong)iVar3) = local_7d[0];
      if (local_7d[0] == '\x01') {
        *param_7 = *param_7 + 0x1f;
      }
      else if (local_7d[0] == '\x02') {
        *param_7 = *param_7 + 2;
      }
      else if (local_7d[0] == '\x03') {
        *param_7 = *param_7 + 8;
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar2 = FUN_00409570(*param_7);
  *param_4 = uVar2;
  uVar2 = FUN_00409570(*param_6);
  *param_5 = uVar2;
  return;
}

