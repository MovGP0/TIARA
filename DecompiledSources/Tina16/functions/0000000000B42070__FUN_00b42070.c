/* Ghidra address: 00b42070 */
/* Ghidra symbol: FUN_00b42070 */


void FUN_00b42070(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte local_3d;
  int local_3c [3];
  
  FUN_00b257f0(param_2,0x14);
  FUN_00b25710(param_2,local_3c);
  FUN_00b257f0(param_2,9);
  FUN_00b256b0(param_2,&local_3d);
  FUN_00b257f0(param_2,2);
  bVar3 = *(byte *)(param_1 + 0x21) & 0xf;
  if (local_3d != 0) {
    FUN_00b257f0(param_2,(uint)local_3d * 2 + 2);
  }
  if ((byte)(bVar3 - 2) < 2) {
    uVar1 = 8;
  }
  else if ((byte)(bVar3 - 5) < 3) {
    uVar1 = 0x19;
  }
  else {
    uVar1 = 0;
  }
  iVar4 = local_3c[0] - (uint)uVar1;
  FUN_00b257f0(param_2,uVar1);
  lVar2 = FUN_00b41860(&DAT_00b3fde8,1);
  *(byte *)(lVar2 + 0x24) = bVar3;
  *(bool *)(lVar2 + 0x2c) = local_3c[0] == 0;
  if (local_3c[0] != 0) {
    if (bVar3 == 7) {
      FUN_00b25810(*(undefined8 *)(lVar2 + 8),0x42);
      FUN_00b25810(*(undefined8 *)(lVar2 + 8),0x4d);
      FUN_00b25810(*(undefined8 *)(lVar2 + 8),0x4b);
      iVar5 = 0xb;
      do {
        FUN_00b25810(*(undefined8 *)(lVar2 + 8),0);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((bVar3 == 2) || (bVar3 == 3)) {
      FUN_00b25840(*(undefined8 *)(lVar2 + 8),0xffffffff);
      FUN_00b25840(*(undefined8 *)(lVar2 + 8),0xffffffff);
      FUN_00b25840(*(undefined8 *)(lVar2 + 8),0xffffffff);
      FUN_00b25840(*(undefined8 *)(lVar2 + 8),0xffffffff);
      FUN_00b25810(*(undefined8 *)(lVar2 + 8),bVar3);
      FUN_00b25810(*(undefined8 *)(lVar2 + 8),0xff);
    }
    FUN_004b8ba0(*(undefined8 *)(lVar2 + 8),param_2,iVar4);
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar2);
  return;
}

