/* Ghidra address: 013f35b0 */
/* Ghidra symbol: FUN_013f35b0 */


/* WARNING: Removing unreachable block (ram,0x013f3671) */

void FUN_013f35b0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 local_1a [2];
  
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
  FUN_004095f0(*(undefined8 *)(puVar1 + 9),*(undefined2 *)(puVar1 + 0x23));
  FUN_004095f0(*(undefined8 *)(puVar1 + 1),*(undefined2 *)(puVar1 + 0x21));
  FUN_004095f0(*(undefined8 *)(puVar1 + 0x19),*(undefined2 *)(puVar1 + 0x21));
  *puVar1 = *(undefined1 *)(param_1 + 0x77c);
  FUN_0172cfa0(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c),puVar1 + 1,
               puVar1 + 9,puVar1 + 0x19,puVar1 + 0x21,puVar1 + 0x23,local_1a);
  lVar2 = **(longlong **)(param_1 + 0x790);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_004095f0(*(undefined8 *)(lVar2 + 0x10),*(undefined2 *)(lVar2 + 0x1a));
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
    lVar2 = **(longlong **)(param_1 + 0x790);
    FUN_0172d140(*(undefined8 *)(param_1 + 0x7c8),*puVar1,puVar1[0x21],
                 *(undefined8 *)(param_1 + 0x7a8),lVar2 + 8,lVar2 + 0x10,lVar2 + 0x19,lVar2 + 0x1a);
    lVar2 = **(longlong **)(param_1 + 0x790);
    *(undefined1 *)(lVar2 + 0x18) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) + 0x21);
    puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
    FUN_0172d5d0(*(undefined8 *)(param_1 + 0x7c8),*puVar1,puVar1[0x21],*(undefined1 *)(lVar2 + 0x19)
                 ,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  }
  return;
}

