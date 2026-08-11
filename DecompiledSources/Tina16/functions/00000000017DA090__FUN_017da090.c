/* Ghidra address: 017da090 */
/* Ghidra symbol: FUN_017da090 */


void FUN_017da090(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  short sVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_00409620(param_1 + 0x1b8,(longlong)(param_2 * 8));
    if (*(char *)(param_1 + 0x94) == '\x01') {
      FUN_00409620(param_1 + 0x1c0,(longlong)(param_2 * 8));
    }
  }
  if ((*(char *)(param_1 + 0x18) == '\x01') || (*(char *)(param_1 + 0x18) == '\x04')) {
    if (*(char *)(param_1 + 0x94) == '\0') {
      FUN_00409620(param_1 + 0x1c8,(longlong)(param_2 * 8));
    }
    else {
      FUN_00409620(param_1 + 0x1c8,(longlong)(param_2 << 4));
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (param_2 < *(int *)(param_1 + 8)) {
      iVar5 = 0;
      iVar8 = *(int *)(param_1 + 8) - param_2;
      if (-1 < iVar8 + -1) {
        do {
          puVar1 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x20) + (longlong)(param_2 + iVar5) * 0x18);
          FUN_004095f0(*puVar1);
          FUN_004095f0(puVar1[1]);
          puVar1 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x28) + (longlong)(param_2 + iVar5) * 0x18);
          FUN_004095f0(*puVar1);
          FUN_004095f0(puVar1[1]);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    FUN_00409620(param_1 + 0x20,(longlong)(param_2 * 0x18));
    FUN_00409620(param_1 + 0x28,(longlong)(param_2 * 0x18));
    lVar6 = (longlong)(param_2 * 2);
    FUN_00409620(param_1 + 0x58,lVar6);
    FUN_00409620(param_1 + 0x60,lVar6);
    FUN_00409620(param_1 + 0x88,(longlong)((param_2 + 1) * 4));
    FUN_00409620(param_1 + 0x68,lVar6);
    FUN_00409620(param_1 + 0x70,lVar6);
    FUN_00409620(param_1 + 0x78,lVar6);
    FUN_00409620(param_1 + 0x80,lVar6);
    iVar5 = FUN_00b905f0(*(undefined4 *)(param_1 + 8),param_2);
    iVar5 = iVar5 + -1;
    iVar8 = 1;
    if (0 < iVar5) {
      do {
        lVar7 = (longlong)iVar8;
        lVar6 = *(longlong *)(param_1 + 0x20) + lVar7 * 0x18;
        FUN_004095f0(*(undefined8 *)(lVar6 + 8));
        uVar4 = FUN_017d7240(param_2 * 2,0xff);
        *(undefined8 *)(lVar6 + 8) = uVar4;
        *(undefined4 *)(lVar6 + 0x10) = 0;
        lVar6 = *(longlong *)(param_1 + 0x28) + lVar7 * 0x18;
        FUN_004095f0(*(undefined8 *)(lVar6 + 8));
        uVar4 = FUN_017d7240(param_2 * 2,0xff);
        *(undefined8 *)(lVar6 + 8) = uVar4;
        *(undefined4 *)(lVar6 + 0x10) = 0;
        uVar2 = (undefined2)iVar8;
        *(undefined2 *)(*(longlong *)(param_1 + 0x68) + lVar7 * 2) = uVar2;
        *(undefined2 *)(*(longlong *)(param_1 + 0x70) + lVar7 * 2) = uVar2;
        *(undefined2 *)(*(longlong *)(param_1 + 0x78) + lVar7 * 2) = uVar2;
        *(undefined2 *)(*(longlong *)(param_1 + 0x80) + lVar7 * 2) = uVar2;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(int *)(param_1 + 8) < param_2) {
      iVar5 = 0;
      iVar8 = param_2 - *(int *)(param_1 + 8);
      if (-1 < iVar8 + -1) {
        do {
          puVar1 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x20) + (longlong)(*(int *)(param_1 + 8) + iVar5) * 0x18
                   );
          uVar4 = FUN_00409570(0x4b0);
          *puVar1 = uVar4;
          uVar4 = FUN_017d7240(param_2 * 2,0xff);
          puVar1[1] = uVar4;
          *(undefined4 *)(puVar1 + 2) = 0;
          *(undefined2 *)((longlong)puVar1 + 0x14) = 0x32;
          puVar1 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_1 + 8) + iVar5) * 0x18
                   );
          uVar4 = FUN_004095c0(100);
          *puVar1 = uVar4;
          uVar4 = FUN_017d7240(param_2 * 2,0xff);
          puVar1[1] = uVar4;
          *(undefined4 *)(puVar1 + 2) = 0;
          *(undefined2 *)((longlong)puVar1 + 0x14) = 0x32;
          sVar3 = (short)iVar5;
          *(short *)(*(longlong *)(param_1 + 0x68) + (longlong)(*(int *)(param_1 + 8) + iVar5) * 2)
               = *(short *)(param_1 + 8) + sVar3;
          *(short *)(*(longlong *)(param_1 + 0x70) + (longlong)(*(int *)(param_1 + 8) + iVar5) * 2)
               = *(short *)(param_1 + 8) + sVar3;
          *(short *)(*(longlong *)(param_1 + 0x78) + (longlong)(*(int *)(param_1 + 8) + iVar5) * 2)
               = *(short *)(param_1 + 8) + sVar3;
          *(short *)(*(longlong *)(param_1 + 0x80) + (longlong)(*(int *)(param_1 + 8) + iVar5) * 2)
               = *(short *)(param_1 + 8) + sVar3;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    thunk_FUN_04179d4f(*(undefined8 *)(param_1 + 0x1d0));
    thunk_FUN_04110bff(param_1 + 0x1d0);
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    iVar8 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),iVar8);
        FUN_00410f20(uVar4);
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
    uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    FUN_004aef40(uVar4,param_2);
    iVar5 = param_2;
    if (-1 < param_2 + -1) {
      do {
        uVar4 = FUN_017d72c0(&DAT_017d51e8,1);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa0),uVar4);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_00409620(param_1 + 0xc0,(longlong)(param_2 * 4));
    FUN_004095f0(*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_004095f0(*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    thunk_FUN_041540ac(param_1 + 0xd8,param_1 + 0xe8);
    thunk_FUN_03dc4200(param_1 + 0xe0,param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  return;
}

