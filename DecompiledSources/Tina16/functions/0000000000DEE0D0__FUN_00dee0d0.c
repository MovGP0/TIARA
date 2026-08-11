/* Ghidra address: 00dee0d0 */
/* Ghidra symbol: FUN_00dee0d0 */


void FUN_00dee0d0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 *in_stack_ffffffffffffff48;
  int local_98;
  int local_90;
  int local_8c;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59 [49];
  
  local_78 = 0;
  local_70[0] = 0;
  dVar12 = (double)FUN_016eb0a0(param_1,1);
  puVar6 = (undefined8 *)FUN_016ea7f0(param_1,2);
  uVar2 = (**(code **)(*(longlong *)*puVar6 + 0x28))((longlong *)*puVar6);
  uVar2 = FUN_00c43ca0(uVar2,2);
  FUN_016e9e20(param_1,uVar2);
  local_90 = 1;
  iVar3 = (**(code **)(*(longlong *)*puVar6 + 0x28))((longlong *)*puVar6);
  iVar4 = iVar3 + -1;
  local_98 = 0;
  iVar11 = iVar4;
  if (-1 < iVar3 + -2) {
    do {
      uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
      uVar7 = FUN_016ebdc0(param_1);
      (**(code **)(*(longlong *)*puVar6 + 0x18))((longlong *)*puVar6,local_70,local_98);
      lVar8 = FUN_01b07f10(param_2,uVar7,local_70[0],&DAT_01ed8c64,CONCAT44(uVar2,4),1);
      iVar3 = FUN_004aeba0(*(undefined8 *)(param_2 + 0x1348),lVar8);
      if (iVar3 == -1) {
        FUN_004ae7e0(*(undefined8 *)(param_2 + 0x1348),lVar8);
      }
      in_stack_ffffffffffffff48 = &local_5a;
      pdVar9 = (double *)FUN_01b05ad0(lVar8,1,0,local_59,in_stack_ffffffffffffff48,&local_5b);
      dVar1 = *pdVar9;
      *(undefined1 *)(lVar8 + 0x121) = 1;
      local_8c = local_98 + 1;
      if (local_8c <= iVar4) {
        iVar3 = (iVar4 - local_8c) + 1;
        do {
          uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
          uVar7 = FUN_016ebdc0(param_1);
          (**(code **)(*(longlong *)*puVar6 + 0x18))((longlong *)*puVar6,&local_78,local_8c);
          lVar10 = FUN_01b07f10(param_2,uVar7,local_78,&DAT_01ed8c64,CONCAT44(uVar2,4),1);
          *(undefined1 *)(lVar10 + 0x121) = 1;
          in_stack_ffffffffffffff48 = &local_5a;
          pdVar9 = (double *)FUN_01b05ad0(lVar10,1,0,local_59,in_stack_ffffffffffffff48,&local_5b);
          dVar13 = *pdVar9;
          FUN_016ec0f0(param_1,local_90,lVar8,lVar10);
          dVar13 = (double)FUN_0040c760(dVar1 * dVar13);
          FUN_016ed220(param_1,local_90,dVar12 * dVar13,0);
          local_90 = local_90 + 1;
          iVar5 = FUN_004aeba0(*(undefined8 *)(param_2 + 0x1348),lVar10);
          if (iVar5 == -1) {
            FUN_004ae7e0(*(undefined8 *)(param_2 + 0x1348),lVar10);
          }
          local_8c = local_8c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_98 = local_98 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = FUN_004aeba0(*(undefined8 *)(param_2 + 0x1350),param_1);
  if (iVar11 == -1) {
    FUN_004ae7e0(*(undefined8 *)(param_2 + 0x1350),param_1);
  }
  FUN_00414560(&local_78,2);
  return;
}

