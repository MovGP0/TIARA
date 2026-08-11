/* Ghidra address: 00d23c30 */
/* Ghidra symbol: FUN_00d23c30 */


void FUN_00d23c30(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_res18 [4];
  undefined4 local_40;
  undefined4 local_3c;
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  lVar3 = param_1[0xd];
  lVar1 = lVar3 + 0x1000;
  FUN_00409a70(&DAT_01ebcdc8,lVar3,0x1000);
  FUN_00409a70(&DAT_01ebddc8,lVar1,0x48);
  iVar5 = 0;
  iVar6 = 0;
  do {
    puVar2 = (uint *)(lVar1 + (longlong)iVar6 * 4);
    *puVar2 = *puVar2 ^ (uint)*(byte *)(param_2 + iVar5 % local_res18[0]) * 0x1000000 +
                        (uint)*(byte *)(param_2 + (iVar5 + 1) % local_res18[0]) * 0x10000 +
                        (uint)*(byte *)(param_2 + (iVar5 + 2) % local_res18[0]) * 0x100 +
                        (uint)*(byte *)(param_2 + (iVar5 + 3) % local_res18[0]);
    iVar5 = (iVar5 + 4) % local_res18[0];
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x12);
  FUN_0040d200(&local_40,8,0);
  iVar5 = 0;
  do {
    (**(code **)(*param_1 + 0x58))(param_1,&local_40);
    uVar4 = (**(code **)PTR_PTR_02005198)(local_40);
    *(undefined4 *)(lVar1 + (longlong)(iVar5 * 2) * 4) = uVar4;
    uVar4 = (**(code **)PTR_PTR_02005198)(local_3c);
    *(undefined4 *)(lVar1 + (longlong)(iVar5 * 2 + 1) * 4) = uVar4;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 9);
  iVar5 = 0;
  do {
    iVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x58))(param_1,&local_40);
      uVar4 = (**(code **)PTR_PTR_02005198)(local_40);
      *(undefined4 *)(lVar3 + (longlong)iVar5 * 0x400 + (longlong)(iVar6 * 2) * 4) = uVar4;
      uVar4 = (**(code **)PTR_PTR_02005198)(local_3c);
      *(undefined4 *)(lVar3 + (longlong)iVar5 * 0x400 + (longlong)(iVar6 * 2 + 1) * 4) = uVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x80);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  FUN_0040d200(&local_40,8,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

