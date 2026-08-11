/* Ghidra address: 01d3c8a0 */
/* Ghidra symbol: FUN_01d3c8a0 */


void FUN_01d3c8a0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_4 == 0) {
    iVar6 = 0;
    if (-1 < param_3 + -1) {
      do {
        puVar1 = (undefined1 *)(param_1 + (longlong)iVar6 * 0x5f);
        puVar2 = (undefined1 *)(param_2 + (longlong)iVar6 * 99);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        FUN_00409a70(puVar1 + 3,puVar2 + 3,0x44);
        FUN_00409a70(puVar1 + 0x47,puVar2 + 0x47,0xc);
        *(undefined4 *)(puVar2 + 0x53) = *(undefined4 *)(puVar1 + 0x53);
        *(undefined4 *)(puVar2 + 0x57) = *(undefined4 *)(puVar1 + 0x57);
        *(undefined8 *)(puVar2 + 0x5b) = 0;
        iVar6 = iVar6 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_4 == 1) {
    iVar6 = 0;
    if (-1 < param_3 + -1) {
      do {
        puVar3 = (undefined2 *)(param_1 + (longlong)iVar6 * 0xb8);
        puVar4 = (undefined2 *)(param_2 + (longlong)iVar6 * 0xbc);
        *puVar4 = *puVar3;
        FUN_00415020(puVar4 + 1,puVar3 + 1,0x78);
        *(undefined1 *)((longlong)puVar4 + 0x7b) = *(undefined1 *)((longlong)puVar3 + 0x7b);
        *(undefined1 *)(puVar4 + 0x3e) = *(undefined1 *)(puVar3 + 0x3e);
        *(undefined2 *)((longlong)puVar4 + 0x7d) = *(undefined2 *)((longlong)puVar3 + 0x7d);
        *(undefined2 *)((longlong)puVar4 + 0x7f) = *(undefined2 *)((longlong)puVar3 + 0x7f);
        *(undefined2 *)((longlong)puVar4 + 0x81) = *(undefined2 *)((longlong)puVar3 + 0x81);
        *(undefined2 *)((longlong)puVar4 + 0x83) = *(undefined2 *)((longlong)puVar3 + 0x83);
        *(undefined4 *)((longlong)puVar4 + 0x85) = *(undefined4 *)((longlong)puVar3 + 0x85);
        *(undefined4 *)((longlong)puVar4 + 0x89) = *(undefined4 *)((longlong)puVar3 + 0x89);
        *(undefined8 *)((longlong)puVar4 + 0x8d) = 0;
        *(undefined1 *)((longlong)puVar4 + 0x95) = *(undefined1 *)((longlong)puVar3 + 0x91);
        *(undefined4 *)(puVar4 + 0x4b) = *(undefined4 *)(puVar3 + 0x49);
        *(undefined4 *)(puVar4 + 0x4d) = *(undefined4 *)(puVar3 + 0x4b);
        *(undefined4 *)(puVar4 + 0x4f) = *(undefined4 *)(puVar3 + 0x4d);
        *(undefined1 *)(puVar4 + 0x51) = *(undefined1 *)(puVar3 + 0x4f);
        *(undefined4 *)((longlong)puVar4 + 0xa3) = *(undefined4 *)((longlong)puVar3 + 0x9f);
        *(undefined4 *)((longlong)puVar4 + 0xa7) = *(undefined4 *)((longlong)puVar3 + 0xa3);
        *(undefined4 *)((longlong)puVar4 + 0xab) = *(undefined4 *)((longlong)puVar3 + 0xa7);
        *(undefined4 *)((longlong)puVar4 + 0xaf) = *(undefined4 *)((longlong)puVar3 + 0xab);
        *(undefined1 *)((longlong)puVar4 + 0xb3) = *(undefined1 *)((longlong)puVar3 + 0xaf);
        *(undefined1 *)(puVar4 + 0x5a) = *(undefined1 *)(puVar3 + 0x58);
        *(undefined1 *)((longlong)puVar4 + 0xb5) = *(undefined1 *)((longlong)puVar3 + 0xb1);
        *(undefined1 *)(puVar4 + 0x5b) = *(undefined1 *)(puVar3 + 0x59);
        *(undefined4 *)((longlong)puVar4 + 0xb7) = *(undefined4 *)((longlong)puVar3 + 0xb3);
        *(undefined1 *)((longlong)puVar4 + 0xbb) = *(undefined1 *)((longlong)puVar3 + 0xb7);
        iVar6 = iVar6 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else {
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Create64BitCompatibleRecord");
    FUN_004134c0(uVar5);
  }
  return;
}

