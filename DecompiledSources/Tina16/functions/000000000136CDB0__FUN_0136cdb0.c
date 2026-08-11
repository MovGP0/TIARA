/* Ghidra address: 0136cdb0 */
/* Ghidra symbol: FUN_0136cdb0 */


undefined1 FUN_0136cdb0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar2 = FUN_0198d430(plVar1);
  FUN_01a982d0(uVar2,param_2,param_3,&local_2c,&local_30);
  FUN_01b1ccc0(&local_2c,&local_30);
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
    plVar3 = (longlong *)FUN_017b8a10(0,&PTR_FUN_017b8668,0x66);
    puVar4 = (undefined4 *)FUN_004095c0(0x1f);
    *puVar4 = 0x66;
    puVar4[1] = 0x105;
    puVar4[2] = 0x13;
    *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(param_1 + 0x19);
    uVar2 = FUN_00b95b20(0,0,0,0);
    *(undefined8 *)((longlong)puVar4 + 0xd) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x15) = 0x800000;
    *(undefined4 *)((longlong)puVar4 + 0x19) = 0xfffffffe;
    *(undefined2 *)((longlong)puVar4 + 0x1d) = 1;
    FUN_004ae7e0(plVar3[8],puVar4);
    FUN_019aba00(plVar3);
    lVar5 = FUN_004aeac0(plVar3[8],0);
    *(undefined1 *)(lVar5 + 0xc) = *(undefined1 *)(param_1 + 0x19);
    uVar2 = FUN_00b95b20(0,0,0,0);
    *(undefined8 *)(lVar5 + 0xd) = uVar2;
    *(undefined4 *)((longlong)plVar3 + 0xc) = local_2c;
    *(undefined4 *)(plVar3 + 2) = local_30;
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar3);
    FUN_0199e310(plVar1,0,1,0);
    FUN_01994230(plVar1);
    FUN_01993f30(plVar1,plVar3,1,0);
    FUN_019965a0(plVar1,plVar3);
    uVar2 = FUN_0198d430(plVar1);
    (**(code **)(*plVar3 + 0xa0))(plVar3,uVar2);
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 7;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2f8))
              (*(longlong **)(param_1 + 0x10),local_2c,local_30,1,1,0);
  }
  return 0;
}

