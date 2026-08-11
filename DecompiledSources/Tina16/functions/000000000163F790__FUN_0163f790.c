/* Ghidra address: 0163f790 */
/* Ghidra symbol: FUN_0163f790 */


void FUN_0163f790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int local_3c [3];
  
  FUN_004b84c0(param_2,local_3c,4);
  iVar4 = local_3c[0];
  if (-1 < local_3c[0] + -1) {
    do {
      lVar1 = FUN_0162a660(&DAT_016229e8,1,0,0);
      FUN_0162a910(lVar1,param_2);
      FUN_0163f720(lVar1,param_3);
      if (*(int *)(lVar1 + 0x50) < 0) {
        FUN_01613110(L"o.FTargetIndex");
      }
      lVar2 = FUN_004aeac0(param_4,*(undefined4 *)(lVar1 + 0x50));
      *(longlong *)(lVar1 + 0x10) = lVar2;
      if (*(char *)(lVar2 + 8) == '\x01') {
        *(undefined4 *)(lVar2 + 0x2c) = 1;
        uVar3 = FUN_01612bc0(lVar2,1);
        FUN_01612780(*(undefined8 *)(lVar2 + 0x58),uVar3);
      }
      else {
        FUN_0162a9a0(lVar1);
      }
      FUN_004ae7e0(param_3,lVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

