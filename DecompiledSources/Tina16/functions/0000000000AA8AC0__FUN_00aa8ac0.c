/* Ghidra address: 00aa8ac0 */
/* Ghidra symbol: FUN_00aa8ac0 */


void FUN_00aa8ac0(longlong param_1,undefined4 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_3bc [4];
  undefined1 local_3b8 [920];
  
  FUN_00417600(local_3b8,&DAT_004013d8,0x26);
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (param_4 == '\0') {
    iVar5 = *(int *)(lVar1 + 0x10) + -1;
    if (-1 < iVar5) {
      do {
        lVar4 = FUN_00aa8dd0(lVar1,iVar5);
        if (*(int *)(param_3 + 0x750) == *(int *)(lVar4 + 0x10)) {
          *(undefined4 *)(lVar4 + 0x18) = param_2;
          break;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  else {
    lVar4 = FUN_00410e60(&DAT_00a93920,1);
    FUN_004ae7e0(lVar1,lVar4);
    *(undefined4 *)(lVar4 + 0x14) = param_2;
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_3 + 0x750);
    *(undefined4 *)(lVar4 + 0xc) = 999999;
    FUN_00a5c200(param_3,local_3b8);
    uVar2 = FUN_00a54390(param_3);
    uVar3 = FUN_00a543b0(param_3);
    FUN_00a57400(local_3b8,200,200,uVar2,uVar3,0,local_3bc,lVar4 + 0x1c);
  }
  FUN_00417840(local_3b8,&DAT_004013d8,0x26);
  return;
}

