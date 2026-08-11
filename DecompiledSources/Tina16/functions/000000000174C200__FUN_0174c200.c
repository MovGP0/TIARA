/* Ghidra address: 0174c200 */
/* Ghidra symbol: FUN_0174c200 */


void FUN_0174c200(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 *puVar8;
  undefined8 local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  byte *local_30;
  
  local_50[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_0174c261:
    if (local_res18 == 0) goto LAB_0174c530;
  }
  else {
    cVar3 = FUN_0175ad40(param_1,param_2);
    if (cVar3 == '\0') goto LAB_0174c261;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar2 + 0xb) == '\0') {
    (**(code **)(*plVar2 + 0x2d0))(plVar2,1,&local_30);
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
    bVar1 = *local_30;
    if (bVar1 < 0x10) {
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xfffffff2,0xffffffec,&local_34,&local_38,1,1);
      puVar8 = &local_40;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),6,0xd,&local_3c,puVar8,1,1);
      uVar4 = (undefined4)((ulonglong)puVar8 >> 0x20);
      if (param_2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*param_2 + 0xd0))(param_2,0);
        (**(code **)(*param_2 + 0x60))
                  (param_2,local_34,local_38,local_3c,CONCAT44(uVar4,local_40),uVar5);
      }
      if (*(char *)(param_1 + 9) == '\0') {
        bVar1 = (&DAT_01f9b0a0)[(ulonglong)bVar1 * 4];
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0xe8))(param_2,2);
        }
        iVar6 = 1;
        piVar7 = &DAT_01f9b030;
        do {
          if ((1 << ((byte)iVar6 & 0x1f) & (uint)bVar1) != 0) {
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),*piVar7 + -0xb,piVar7[1] + -0x11,&local_34,
                         &local_38,local_res18 == 0,1);
            puVar8 = &local_40;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),piVar7[2] + -0xb,piVar7[3] + -0x11,
                         &local_3c,puVar8,local_res18 == 0,1);
            uVar4 = (undefined4)((ulonglong)puVar8 >> 0x20);
            if (param_2 != (longlong *)0x0) {
              (**(code **)(*param_2 + 0x40))(param_2,local_34,local_38);
              (**(code **)(*param_2 + 0x48))(param_2,local_3c,local_40);
            }
            if (local_res18 != 0) {
              FUN_01243890(local_50,local_res18,local_res20,local_34,CONCAT44(uVar4,local_38),
                           local_3c,local_40,2,0x8000);
            }
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (iVar6 != 8);
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0xe8))(param_2,0);
        }
        *(uint *)(param_1 + 0x38) = (uint)*local_30;
      }
    }
  }
LAB_0174c530:
  FUN_0041b800(local_50);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

