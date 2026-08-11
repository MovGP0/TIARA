/* Ghidra address: 01b9b710 */
/* Ghidra symbol: FUN_01b9b710 */


void FUN_01b9b710(void)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  int local_4c;
  undefined2 local_42;
  longlong local_40 [3];
  
  iVar1 = *(int *)(DAT_02110de0 + 0x10);
  FUN_00c42670(0x4000000000000000,(double)iVar1);
  iVar3 = FUN_0040c770();
  dVar6 = 0.0;
  iVar3 = iVar3 + -1;
  if (0 < iVar3) {
    do {
      dVar6 = dVar6 + 0.001;
      local_4c = 0;
      iVar5 = iVar1;
      if (-1 < iVar1 + -1) {
        do {
          FUN_00c42670(0x4000000000000000,(double)local_4c);
          FUN_0040c770();
          lVar4 = FUN_01d347d0(DAT_02110de0,local_4c);
          plVar2 = *(longlong **)(lVar4 + 0x108);
          FUN_01d3d920(plVar2,10,0,&local_42);
          (**(code **)(*plVar2 + 0x2d0))(plVar2,local_42,local_40);
          FUN_01d3aad0(*(undefined8 *)(local_40[0] + 8),dVar6);
          local_4c = local_4c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

