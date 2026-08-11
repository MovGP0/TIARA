/* Ghidra address: 01d77520 */
/* Ghidra symbol: FUN_01d77520 */


int FUN_01d77520(void)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 *local_120;
  int local_108;
  undefined8 local_104 [23];
  int local_4c;
  int local_48;
  undefined4 local_44;
  char local_3d;
  int local_3c;
  longlong *local_38;
  longlong local_30;
  
  local_120 = auStack_148;
  local_128 = 0;
  local_38 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_00416ba0(&local_128,*(undefined8 *)PTR_DAT_020049a0,L"\\CLCF.CAT");
  FUN_004b9f40(local_38,local_128);
  do {
    (**(code **)(*local_38 + 0x18))(local_38,&local_3d,1);
  } while (local_3d != '\0');
  (**(code **)(*local_38 + 0x50))(local_38,0xe,1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 0x5f),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 0xc),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 4),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 5),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 5),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 0x1f),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 0x15),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_4c,4);
  (**(code **)(*local_38 + 0x50))(local_38,(longlong)(local_4c * 0x72),1);
  (**(code **)(*local_38 + 0x18))(local_38,&local_3c,4);
  local_44 = 0xb8;
  local_48 = local_3c * 0xb8;
  FUN_00419260(PTR_DAT_020020b8,&DAT_01d36c50,1,(longlong)local_3c);
  local_30 = FUN_004095c0((longlong)local_48);
  (**(code **)(*local_38 + 0x18))(local_38,local_30,local_48);
  local_108 = 0;
  iVar3 = local_3c;
  if (-1 < local_3c + -1) {
    do {
      puVar4 = (undefined8 *)(local_30 + (longlong)local_108 * 0xb8);
      puVar5 = local_104;
      for (lVar2 = 0x17; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)(*(longlong *)PTR_DAT_020020b8 + (longlong)local_108 * 2) =
           (undefined2)local_104[0];
      uVar1 = FUN_00b905e0(*(undefined4 *)PTR_DAT_02001f48,(undefined2)local_104[0]);
      *(undefined4 *)PTR_DAT_02001f48 = uVar1;
      local_108 = local_108 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004095f0(local_30);
  FUN_00410f20(local_38);
  FUN_00414480(&local_128);
  return local_3c;
}

