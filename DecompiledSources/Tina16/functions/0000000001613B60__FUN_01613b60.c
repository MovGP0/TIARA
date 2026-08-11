/* Ghidra address: 01613b60 */
/* Ghidra symbol: FUN_01613b60 */


void FUN_01613b60(undefined8 param_1,ushort param_2,undefined8 *param_3,longlong param_4,
                 longlong param_5,undefined8 param_6)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_140 [256];
  undefined8 local_40 [2];
  undefined8 *local_30;
  
  local_40[0] = 0;
  iVar7 = *(int *)(param_5 + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(param_5,iVar5);
      FUN_0043e130(local_40,*(undefined8 *)(lVar4 + 8));
      FUN_00416910(local_140,local_40[0],0xff);
      uVar3 = FUN_014dcff0(param_6,local_140,param_2);
      if (((uVar3 & 0xffff) != 0) &&
         (uVar6 = uVar3 & 0xffff, uVar6 == param_2 || (uVar3 & 0xffff) < (uint)param_2)) {
        local_30 = param_3;
        if (param_4 == 0) {
          uVar2 = FUN_01cfd270(param_1,0,(uVar3 & 0xffff) - 2);
          FUN_00b909d0(&local_30,uVar2);
          cVar1 = FUN_01cfd030(param_1,uVar6 - 1);
          if (cVar1 == '\x03') {
            *local_30 = *(undefined8 *)(lVar4 + 0x10);
          }
        }
        else {
          uVar2 = FUN_01d36e90(param_4,0,uVar6 - 2);
          FUN_00b909d0(&local_30,uVar2);
          if (*(char *)(param_4 + (int)((uVar3 & 0xffff) - 1)) == '\x03') {
            *local_30 = *(undefined8 *)(lVar4 + 0x10);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(local_40);
  return;
}

