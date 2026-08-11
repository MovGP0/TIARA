/* Ghidra address: 0136eb70 */
/* Ghidra symbol: FUN_0136eb70 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0136eb70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x780),
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) + 0x468) + 0x10)
              );
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) + 0x468) +
                  0x10);
  iVar3 = 1;
  if (0 < iVar5) {
    puVar4 = &DAT_02108278;
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) + 0x468),
                           iVar3 + -1);
      *puVar4 = *(undefined8 *)(lVar1 + 0x1c);
      FUN_00f4af00(local_30,lVar1,*(undefined8 *)PTR_DAT_02001f18);
      uVar2 = FUN_014313c0(&PTR_FUN_0142bf08,1,puVar4,iVar3);
      FUN_00b0ab70(*(undefined8 *)(param_1 + 0x780),local_30[0],uVar2);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_008003b0(param_1);
  _DAT_021082c8 = FUN_0040c770((double)iVar5 / 96.0);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6b8),0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x778));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x6d8),
               *(undefined2 *)(*(longlong *)(param_1 + 0x7a8) + 0xd9f));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x790),
               (longlong)*(short *)(*(longlong *)(param_1 + 0x7a8) + 0xda1));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x778),
               (longlong)*(short *)(*(longlong *)(param_1 + 0x7a8) + 0xda3));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x798),
               *(undefined1 *)(*(longlong *)(param_1 + 0x7a8) + 0xda5));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x750),
               *(undefined2 *)(*(longlong *)(param_1 + 0x7a8) + 0x963));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x748),
               *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x965));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x740),
               *(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x96d));
  if (*(char *)(param_1 + 0x7a0) != '\b') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),0);
  }
  FUN_0064cf60(param_1,0x481);
  FUN_00414480(local_30);
  return;
}

