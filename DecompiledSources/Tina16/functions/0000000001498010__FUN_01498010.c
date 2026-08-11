/* Ghidra address: 01498010 */
/* Ghidra symbol: FUN_01498010 */


void FUN_01498010(longlong param_1,undefined8 param_2,short *param_3,ushort param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (((*param_3 == 0xd) && (*(int *)(param_1 + 0xc08) != 1)) && ((param_4 & 1) == 0)) {
    cVar2 = FUN_0149a860(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_01495d80(param_1,1,*PTR_DAT_020045a8);
      if (cVar2 == '\0') {
        FUN_00410f20(*(undefined8 *)(param_1 + 0x930));
        *(undefined8 *)(param_1 + 0x930) = 0;
        uVar3 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x930) = uVar3;
        FUN_017e8080(uVar3,*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0x860));
        FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),1,0,0);
        lVar1 = *(longlong *)(param_1 + 0x930);
        *(undefined8 *)(lVar1 + 0x628) = *(undefined8 *)(param_1 + 0x938);
        *(undefined8 *)(lVar1 + 0x630) = *(undefined8 *)(param_1 + 0x940);
        *(undefined8 *)(lVar1 + 0x638) = *(undefined8 *)(param_1 + 0x948);
        *(undefined8 *)(lVar1 + 0x640) = *(undefined8 *)(param_1 + 0x950);
        *(undefined8 *)(lVar1 + 0x648) = *(undefined8 *)(param_1 + 0x958);
        puVar5 = (undefined8 *)(param_1 + 0x960);
        puVar6 = (undefined8 *)(lVar1 + 0x650);
        for (lVar4 = 0x48; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  FUN_01493c70(param_1);
  return;
}

