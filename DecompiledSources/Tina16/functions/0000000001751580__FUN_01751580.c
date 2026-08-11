/* Ghidra address: 01751580 */
/* Ghidra symbol: FUN_01751580 */


void FUN_01751580(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  local_50 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar2 = FUN_0175ad40(param_1,param_2), cVar2 != '\0')) ||
      (local_res18 != 0)) && (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb) == '\0')) {
    FUN_01d048c0(*(longlong *)(param_1 + 0x28),0,0xfffffff8,local_48,local_44,local_res18 == 0,1);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xfffffffc,0xfffffff4,local_40,local_3c,
                 local_res18 == 0,1);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0,0xfffffff0,local_38,local_34,local_res18 == 0,1);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),4,0xfffffff4,local_30,local_2c,local_res18 == 0,1);
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
    }
    iVar5 = *(int *)(param_1 + 0xd0);
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        pcVar1 = (char *)(param_1 + 8 + (longlong)iVar4 * 0x30);
        if ((*(char *)(param_1 + 9) == '\0') && (*pcVar1 != '\0')) {
          local_54 = *(undefined4 *)(pcVar1 + 0x18);
        }
        else {
          local_54 = 0xffffff;
        }
        if (param_2 != (longlong *)0x0) {
          uVar3 = FUN_005fbf20(local_54);
          (**(code **)(*param_2 + 200))(param_2,uVar3);
          FUN_01a99ff0(param_2,local_48,3);
        }
        if (local_res18 != 0) {
          FUN_01244360(&local_50,local_res18,local_res20,local_48,3,1,0x8000,local_54);
        }
        pcVar1[1] = *pcVar1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

