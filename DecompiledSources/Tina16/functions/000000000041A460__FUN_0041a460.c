/* Ghidra address: 0041a460 */
/* Ghidra symbol: FUN_0041a460 */


undefined8 FUN_0041a460(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  undefined1 local_40 [6];
  ushort local_3a [3];
  int local_34;
  int local_30;
  int local_2c;
  
  param_3 = param_3 & 0xffffffff;
  lVar7 = 0;
  sVar2 = (*DAT_0200aef0)();
  if (sVar2 != (short)param_3) {
    lVar7 = FUN_0041a400(param_1,&local_2c);
    local_34 = 3;
    puVar6 = local_3a;
    do {
      *puVar6 = (ushort)(byte)(&DAT_01dbc0f0)[(ushort)param_3 & 0xf];
      param_3 = (param_3 & 0xffff) / 0x10;
      local_34 = local_34 + -1;
      puVar6 = puVar6 + -1;
    } while (local_34 != -1);
    local_3a[1] = 0;
    local_3a[2] = 0;
    (*DAT_0200aee8)(4,local_40,&local_34);
  }
  lVar3 = FUN_0041a400(param_1,&local_30);
  if (lVar3 != 0) {
    local_34 = 0;
    if (-1 < local_30 + -2) {
      iVar5 = local_30 + -1;
      do {
        if (*(short *)(lVar3 + (longlong)local_34 * 2) == 0) {
          *(undefined2 *)(lVar3 + (longlong)local_34 * 2) = 0x2c;
        }
        local_34 = local_34 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_004167d0(param_2,lVar3);
    FUN_004095f0(lVar3);
  }
  if (lVar7 != 0) {
    (*DAT_0200aee8)(0,0,&local_34);
    uVar4 = FUN_0041a400(param_1,&local_30);
    if ((local_2c != local_30) ||
       (cVar1 = FUN_0041a3d0(param_1,lVar7,uVar4,local_30), cVar1 != '\0')) {
      (*DAT_0200aee8)(8,lVar7,&local_34);
    }
    FUN_004095f0(uVar4);
    FUN_004095f0(lVar7);
    return param_2;
  }
  return param_2;
}

