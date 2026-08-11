/* Ghidra address: 01431f60 */
/* Ghidra symbol: FUN_01431f60 */


void FUN_01431f60(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined7 uVar4;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_1c [12];
  
  uVar4 = (undefined7)((ulonglong)PTR_DAT_020039a8 >> 8);
  if (*PTR_DAT_020039a8 == '\0') {
    uVar2 = FUN_013f61c0(&PTR_FUN_013f5938,CONCAT71(uVar4,1) & 0xffffffff,
                         *(undefined8 *)PTR_DAT_02004030,*(undefined8 *)(param_1 + 8),param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  else {
    uVar2 = FUN_013ec890(&PTR_FUN_013eb788,CONCAT71(uVar4,1) & 0xffffffff,
                         *(undefined8 *)PTR_DAT_02004030,*(undefined8 *)(param_1 + 0x10),param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    lVar3 = FUN_019a4600();
    cVar1 = FUN_01d07fe0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar3 + 0x470),local_1c);
    if (cVar1 == '\0') {
      lVar3 = FUN_019a4600();
      cVar1 = FUN_01d07fe0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar3 + 0x468),local_1c);
      if (cVar1 == '\0') {
        lVar3 = FUN_019a4600();
        if (*(int *)(*(longlong *)(lVar3 + 0x478) + 0x10) < 1) {
          FUN_013ecad0(*(undefined8 *)(param_1 + 0x30),0,0);
        }
        else {
          FUN_013ecad0(*(undefined8 *)(param_1 + 0x30),1,0);
        }
      }
      else {
        FUN_013ecad0(*(undefined8 *)(param_1 + 0x30),1,0);
      }
    }
    else {
      FUN_013ecad0(*(undefined8 *)(param_1 + 0x30),0,0);
    }
  }
  return;
}

