/* Ghidra address: 01140aa0 */
/* Ghidra symbol: FUN_01140aa0 */


void FUN_01140aa0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  *(undefined4 *)(param_1 + 0x1055d8) = *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x9c);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  puVar3 = PTR_DAT_02004010;
  puVar1 = (undefined8 *)(PTR_DAT_02004010 + 0x3dd);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(PTR_DAT_02004010 + 0x3d5);
  *(undefined8 *)(param_1 + 0x788) = *puVar1;
  *(undefined2 *)(param_1 + 0x790) = *(undefined2 *)(puVar3 + 0x3e5);
  *(undefined *)(param_1 + 0x792) = puVar3[999];
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x781));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x789));
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*(byte *)(param_1 + 0x780) - 7);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6f8),*(undefined1 *)(param_1 + 0x791));
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined1 *)(param_1 + 0x792));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x710),(ulonglong)((byte)PTR_DAT_02004010[0x82b] + 2) % 3);
  if (*(char *)(param_1 + 0x1007b1) == '\0') {
    FUN_01cc0ae0(*(undefined8 *)(param_1 + 0x770),local_30);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_30[0]);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),0);
  }
  else {
    uVar5 = FUN_019a4600();
    FUN_017c7cd0(uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x4f0),local_30,0xffffffff);
    iVar6 = 0;
    while( true ) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
      iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (iVar4 <= iVar6) break;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,iVar6);
      iVar4 = FUN_0043e650(local_38,*(undefined8 *)(PTR_DAT_02004010 + 0x81b));
      if (iVar4 == 0) break;
      iVar6 = iVar6 + 1;
    }
    if (*(longlong *)(PTR_DAT_02004010 + 0x81b) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
      iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (iVar6 < iVar4) {
        (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
                  (*(longlong **)(param_1 + 0x708),iVar6);
        goto LAB_01140d69;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
  }
LAB_01140d69:
  *(undefined1 *)(param_1 + 0x1055d4) = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
  uVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x128))
            (*(longlong **)(param_1 + 0x6c0),
             CONCAT71((int7)((ulonglong)uVar5 >> 8),0 < (int)uVar5) & 0xffffffff);
  FUN_0064cf60(param_1,0x479);
  FUN_00414560(&local_38,2);
  return;
}

