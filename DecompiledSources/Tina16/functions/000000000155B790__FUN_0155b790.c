/* Ghidra address: 0155b790 */
/* Ghidra symbol: FUN_0155b790 */


undefined1 FUN_0155b790(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_0154c700(param_1);
  FUN_0154db40(param_1);
  FUN_01560d30(param_1);
  FUN_01560050(param_1);
  FUN_0155b700(param_1,*(undefined8 *)(param_1 + 0x748));
  FUN_0154da30(param_1);
  FUN_01569090(param_1);
  FUN_0156b2d0(param_1);
  FUN_015693e0(param_1);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),iVar5);
      iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar3 + 0x828) + 8),L"cqpic");
      *(bool *)(param_1 + 0x9e9) = iVar2 == 0;
      lVar3 = *(longlong *)(lVar3 + 0x828);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)PTR_PTR_020038b0);
      if (((iVar2 == 0) && (*(char *)(param_1 + 0x9e9) == '\0')) &&
         (cVar1 = FUN_015fa060(*(undefined8 *)(lVar3 + 8)), cVar1 != '\0')) {
        uVar4 = FUN_015710a0(&DAT_0156d6c8,1,0xfffffffd,*(undefined1 *)(param_1 + 0x94e));
        FUN_01571520(uVar4,L"ponrst_n");
        FUN_015714d0(uVar4,1);
        FUN_01571eb0(*(undefined8 *)(param_1 + 0x750),uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0154d7d0(param_1);
  FUN_01561ad0(param_1);
  FUN_01561900(param_1,*(undefined8 *)(param_1 + 0xa30),*(undefined8 *)(param_1 + 0xa38),param_2);
  FUN_0154eea0(param_1);
  if (*(char *)(param_1 + 0x94f) != '\0') {
    FUN_0155f5c0(param_1);
  }
  FUN_01561cb0(param_1);
  FUN_01569130(param_1);
  FUN_0155f6d0(param_1);
  FUN_0155b320(param_1);
  FUN_0155fc00(param_1);
  FUN_00416ba0(local_30,*(undefined8 *)(param_1 + 0x7a8),L"\\nodes.dat");
  uVar4 = FUN_004b9860(&PTR_FUN_0047c498,1,local_30[0],0xff00);
  FUN_01575890(*(undefined8 *)(param_1 + 0x8d0),uVar4);
  FUN_00410f20(uVar4);
  FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0x7a8),L"\\nodes_txt.txt");
  FUN_01575960(*(undefined8 *)(param_1 + 0x8d0),local_38);
  FUN_0155b600(param_1);
  cVar1 = _IsASMMode();
  if (cVar1 != '\0') {
    FUN_0155c690(param_1);
  }
  if ((*(char *)(param_1 + 0x838) == '\0') && (*(int *)(param_1 + 0x95c) == 3)) {
    FUN_0156ad10(param_1);
  }
  FUN_0156c580(param_1,*(undefined8 *)(param_1 + 0xa20));
  FUN_00414560(&local_38,2);
  return local_39;
}

